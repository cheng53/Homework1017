#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		t = b;
		b = a;
		a = t;
	}
	if (b > c)
	{
		t = c;
		c = b;
		b = t;
	}
	if (a > b)
	{
		t = b;
		b = a;
		a = t;
	}
	printf("largest number is %d\n", c);
	printf("smallest number is %d\n", a);
	return 0;
}