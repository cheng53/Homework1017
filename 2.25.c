#include <stdio.h>
#include <stdlib.h>

int main() {
	//C
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				if (j < 1)
					printf(" ");
				else
					printf("C");
			}
		}
		else
		{
			printf("C");
			for (int k = 0; k < 8; k++)
			{
				printf(" ");
			}
			printf("C");
		}
		printf("\n");
	}
	printf("\n");
	//C
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			for (int j = 0; j < 9; j++)
			{
				if (j < 1)
					printf(" ");
				else
					printf("C");
			}
		}
		else
		{
			printf("C");
			for (int k = 0; k < 8; k++)
			{
				printf(" ");
			}
			printf("C");
		}
		printf("\n");
	}
	printf("\n");

	//Y
	for (int i = 0; i < 2; i++)
	{
		for (int j = i; j < 9; j++)
		{
			printf(" ");
		}
		printf("Y\n");
	}

	for (int k = 0; k < 7; k++)
	{
		printf("Y");
	}
	printf("\n");

	for (int l = 2; l > 0; l--)
	{
		for (int j = l; j < 10; j++)
		{
			printf(" ");
		}
		printf("Y\n");
	}
	return 0;
}