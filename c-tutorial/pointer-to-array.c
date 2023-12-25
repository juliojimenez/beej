#include <stdio.h>

int main(void) {
    int a[5] = { 11, 22, 33, 44, 55 };
    int *p;

    p = &a[0];    // p points to the array
                  // Well, to the first element actually
                  // Same as p = a 

    printf("%d\n", *p);    // prints 11 
}

