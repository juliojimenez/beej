#include <ctype.h>
#include <inttypes.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// macros for packing floats and doubles:
#define pack754_16(f) (pack754((f), 16, 5))
#define pack754_32(f) (pack754((f), 32, 8))
#define pack754_64(f) (pack754((f), 64, 11))
#define unpack754_16(f) (unpack754((i), 16, 5))
#define unpack754_32(i) (unpack754((i), 32, 8))
#define unpack754_64(i) (unpack754((i), 64, 11))

// pack754() - pack a floating point number into IEEE-754 format
unsigned long long int pack754(long double f, unsigned bits, unsigned expbits) {
    long double fnorm;
    int shift;
    long long sign, exp, significand;
    unsigned significandbits = bits - expbits - 1;    // -1 for sign bit
    
    if (f == 0.0) return 0;    // get this special case out of the way
    
    // check sign and begin normalization
    if (f < 0) { sign = 1; fnorm = -f; }
    else { sign = 0; fnorm = f; }

    // get the normalized form of f and track the exponent
    while (fnorm >= 2.0) { fnorm /= 2.0; shift++; }
    while (fnorm < 1.0) { fnorm *= 2.0; shift--; }
    fnorm = fnorm - 1.0;

    // calculate the binary form (non-float) of the significand data
    significand = fnorm * ((1LL<<significandbits) + 0.5f);

    // get the biased exponent
    exp = shift + ((1<<(expbits - 1)) - 1);    // shift + bias

    // return the final answer
    return (sign<<(bits - 1)) | (exp<<(bits - expbits - 1)) | significand;
}

// unpack754() - unpack a floating point number from IEEE-754 format
long double unpack754(unsigned long long int i, unsigned bits, unsigned expbits) {
    long double result;
    long long shift;
    unsigned bias;
    unsigned significandbits = bits - expbits - 1; // -1 for sign bit
    
    if (i == 0) return 0.0;

    // pull the significand
    result = (i&((1LL<<significandbits) - 1));    // mask
    result /= (1LL<<significandbits);    // convert back to float
    result += 1.0f;    // add the one back on

    // deal with the exponent
    bias = (1<<(expbits - 1)) - 1;
    shift = ((i>>significandbits)&((1LL<<expbits) - 1)) - bias;
    while (shift > 0) { result *= 2.0; shift--; }
    while (shift < 0) { result /= 2.0; shift++; }

    // sign it
    result *= (i>>(bits - 1))&1 ? -1.0 : 1.0;

    return result;
}

// packi16 - store a 16-bit int into a char buffer (like htons())
void packi16(unsigned char *buf, unsigned int i) {
    *buf++ = i>>8; *buf++ = i;
}

int main(void) {
    float f = 3.1415926, f2;
    double d = 3.14159265358979323, d2;
    uint32_t fi;
    uint64_t di;

    fi = pack754_32(f);
    f2 = unpack754_32(fi);

    di = pack754_64(d);
    d2 = unpack754_64(di);

    printf("float before   : %.7f\n", f);
    printf("float encoded  : 0x%08" PRIx32 "\n", fi);
    printf("float after    : %.7f\n", f2);

    printf("double before  : %.20lf\n", d);
    printf("double encoded : 0x%016" PRIx64 "\n", di);
    printf("double after   : %.20lf\n", d2);

    return 0;
}
