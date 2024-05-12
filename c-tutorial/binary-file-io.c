#include <stdio.h>

int main(void) {
    FILE *fp;							                // Variable to represent open file
    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb");		                // Open file for writing in binary mode

    fwrite(bytes, sizeof(unsigned char), 6, fp);	    // Write 6 bytes to the file

    fclose(fp);							                // Close the file when done

    FILE *fp2;							                // Variable to represent open file
    unsigned char c;                                    // Variable to store a single byte

    fp2 = fopen("output.bin", "rb");		            // Open file for reading in binary mode

    while (fread(&c, sizeof(unsigned char), 1, fp2) > 0) {	// Read a single byte from the file
        printf("%d\n", c);                              // Print the byte
    }
}
