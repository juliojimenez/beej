#include <stdio.h>
#include <string.h>

int main(void) {
	// WRONG WAY

	char s[] = "Hello, World!";
	char *t;
	
	// This makes a copy of the pointer, not a copy of the string!
	t = s;
	
	// We modify t
	t[0] = 'z';
	
	// But printing s shows the modification!
	// Because t and s point to the same string!
	printf("%s\n", s);
	
	// RIGHT WAY
	
	char u[] = "Hello, World!";
	char v[100];	// Each char is one byte, so plenty of room
	
	// This makes a copy of the string!
	strcpy(v, u);
	
	// We modify v
	v[0] = 'z';
	
	// And u remains unaffected because it's a different string
	printf("%s\n", u);
	
	// But v has been changed
	printf("%s\n", v);
}
