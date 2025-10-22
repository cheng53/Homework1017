#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 5;
	
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf(" *******\n");
	printf("*********\n");

	for (int i = 0; i < x; i++)
	{
		for (int j = x - 1; j > i; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * (i + 1) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}