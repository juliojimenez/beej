#include <stdio.h>

int main(void) {
	FILE *fp;							// Variable to represent open file
	char name[1024];					// Variable to store name
	float length;						// Variable to store length
	int mass;							// Variable to store mass
	
	fp = fopen("whales.txt", "r");
	
	while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
		printf("%s whale, %d tonnes, %.1f meters\n", name, mass, length);
		
	fclose(fp);
}
