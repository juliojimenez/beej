#include <stdio.h>

int my_strlen (char *s) {
	// start scanning from the beginning of the string
	char *p = s;

	// keep going until we reach the null terminator
	while (*p != '\0') {
		p++;
	}

	// return the difference in pointers
	return p - s;
}

int main(void) {
	printf("%d\n", my_strlen("Hello, world!"));	// Prints "13"
}
