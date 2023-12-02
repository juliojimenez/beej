#include <stdio.h>

int main(void) {
    int goat_count;

    printf("Enter a goat count: ");
    scanf("%d", &goat_count);    // Read an integer from the keyboard

    switch (goat_count) {
        case 0:
            printf("You have no goats.\n");
            break;
        case 1:
            printf("You have a singular goat.\n");
            break;
        case 2:
            printf("You have a brace of goats.\n");
            break;
        default:
            printf("You have a bona fide plethora of goats.\n");
            break;
    }
}
