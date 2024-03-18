#include <stdio.h>

int main(void) {
	FILE *fp;							// Variable to represent open file
	int c;								// Variable to store character
	
	fp = fopen("hello-world.txt", "r");	// Open file for reading
	
	while ((c = fgetc(fp)) != EOF) {	// Read a single character
		printf("%c", c);				// Print char to stdout
	}
	
	fclose(fp);							// Close the file when done
}
