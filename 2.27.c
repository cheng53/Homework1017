#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 0;
	scanf("%d", &x);
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