#include <stdio.h>

/**
 * developing a program in C that calcute the BMI of the patients.
 * main - a program that calculate BMI.
 *
 * Return: always 0 (sucess).
 */
int main()
{
	float height;
	float weight;
	float BMI;

	printf("Enter your height: \n");
	scanf("%f", &height);
	printf("Enter your weight: \n");
	scanf("%f", &weight);

	BMI = (weight / (height * height));

	if (BMI < 18.5)
	{
		printf("Underweight \n");
	}
	else if (BMI >= 18.5 && BMI < 25.0)
	{
		printf("Normal Weight \n");
	}
	else if (BMI >= 25.0 && BMI < 30.0)
	{
		printf("Overweight \n");
	}
	else
		printf("Obesity \n");

	return (0);
}
