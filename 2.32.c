#include <stdio.h>
#include <stdlib.h>

int main() {

	float w, h, bmi;
	printf("Enter your weight (kg): ");
	scanf("%f", &w);
	printf("Enter your height (m) : ");
	scanf("%f", &h);
	bmi = w / (h * h);
	printf("Your BMI is: %.2f\n", bmi);

	if (bmi < 18.5)
	{
		printf("You are underweight.\n");
	}
	else if (bmi >= 18.5 && bmi < 24.9)
	{
		printf("You have a normal weight.\n");
	}
	else if (bmi >= 25 && bmi < 29.9)
	{
		printf("You are overweight.\n");
	}
	else
	{
		printf("You are obese.\n");
	}

	printf("BMI VALUES:\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");

	return 0;
}