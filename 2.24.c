#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	if (n % 2 == 0)
	{
		printf("%d is an even number.\n", n);
	}
	else
	{
		printf("%d is an odd number.\n", n);
	}
	return 0;
}