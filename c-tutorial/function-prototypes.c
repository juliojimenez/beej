#include <stdio.h>

int foo(void);    // this is the prototype!

int main(void) {
    int i;

    // We can call foo() here before its definition because the
    // prototype has already been declared above!

    i = foo();

    printf("%d\n", i);    // 3490
}

int foo(void) {    // this is the definition, just like the prototype!
    return 3490;
}

