#include <stdio.h>
#include <stdlib.h>

int main() {
	int tm, cpg, ampg, pf, td, tc;
	printf("Enter the total miles driven per day: ");
	scanf("%d", &tm);
	printf("Enter the cost per gallon of gasoline: ");
	scanf("%d", &cpg);
	printf("Enter the average miles per gallon: ");
	scanf("%d", &ampg);
	printf("Enter the parking fees per day: ");
	scanf("%d", &pf);
	printf("Enter the tolls per day: ");
	scanf("%d", &td);

	tc = (tm / ampg) * cpg + pf + td;
	printf("The total cost of driving per days is : %d \n", tc);

	return 0;
}