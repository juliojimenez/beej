#include <stdio.h>  // for printf
#include <stdlib.h> // for rand

int main(void) {
    int r;
    do {
        r = rand() % 100;   // get a random number between 0 and 99
        printf("%d\n", r);
    } while (r != 37);  // repeat until 37 comes up
}

