#include <stdio.h>

int main(void) {
	FILE *fp;							// Variable to represent open file

	fp = fopen("hello-world.txt", "r");	// Open file for reading
	if (fp == NULL) {
		printf("File not found.\n");
		return 1;
	}

	int c = fgetc(fp);					// Read a single character
	printf("%c\n", c);					// Print char to stdout

	fclose(fp);							// Close the file when done
	return 0;
}
