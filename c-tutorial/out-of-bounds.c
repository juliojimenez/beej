#include <stdio.h>

int main(void) {
    int i;
    int a[5] = { 22, 37, 3490, 18, 95 };

    for (i = 0; i < 10; i++) {    // bad news, printing too many elements!!!
        printf("%d\n", a[i]);
    }
}

