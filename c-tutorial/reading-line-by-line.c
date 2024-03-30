#include <stdio.h>

int main(void) {
  FILE *fp;      // Variable to represent open file
  char s[1024];  // Variable to store line
  int linecount; // Variable to store character

  fp = fopen("quote.txt", "r"); // Open file for reading

  while (fgets(s, sizeof s, fp) != NULL) { // Read a single line
    printf("%d: %s", ++linecount, s);      // Print line to stdout
  }

  fclose(fp); // Close the file when done
}
