#include <stdio.h>

int main(void) {
	FILE *fp;							// Variable to represent open file
	int x = 32;							// Variable to store integer
	fp = fopen("output.txt", "w");		// Open file for writing
	fputc('B', fp);						// Write a single character
	fputc('\n', fp);					// Write a single character
	fprintf(fp, "x = %d\n", x);			// Write formatted output
	fputs("Hello, world!\n", fp);		// Write a string
	fclose(fp);							// Close the file when done
}
