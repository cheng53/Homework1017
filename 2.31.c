#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("number square cube");
	printf("\n");
	for (int i = 0; i <= 10; i++)
	{
		printf("%d	%d	%d", i, i * i, i * i * i);
		printf("\n");
	}
}