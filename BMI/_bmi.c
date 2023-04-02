#include <stdio.h>

/**
 * Writing a program that accept input from users and print
 * of interpretation of the users BMI.
 *
 * main - a program that print IBM of users.
 * Return: always 0 (sucess)
 */
int main()
{
	float height;
	float weight;
	int BMI;

	printf("input your height ");
	scanf("%f", &height);
	printf("Input your weight ");
	scanf("%f", &weight);

	BMI = (weight (height * height));

	switch (BMI)
	{
		case 0 ... 18:
			printf("Underweight \n");
			break;
		case 19 ... 25:
			printf("Normal Weight \n");
			break;
		case 26 ... 30:
			printf("Overweight");
			break;
		default :
			printf("Obesity");
			break;
	}
/* After trying my hand with the switch case
 * I got to realise switch case does not accept
 * float type or double only int and char type.
 *  
 *  if there is a way for me to calculate IBM
 *  using switch case in C. you can infor me.
 *  Thanks
 */
	return (0);

}
