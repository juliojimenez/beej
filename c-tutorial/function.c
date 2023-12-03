#include <stdio.h>

int plus_one(int n) {    // the "definition"
    return n + 1;
}

int main(void) {
    int i = 10, j;

    j = plus_one(i);    // the "call"

    printf("i + 1 is %d\n", j);
}

