//Jessenia Hernandez Mora
//CSC321, Lab 11

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double hypo(double base, double height);

int main(void)
{
	double base, height, result;

	printf("To find the hypotenuse of a triangle, enter the following: \n");
	
	printf("Base: ");
	scanf("%lf", &base);

	printf("Height: ");
	scanf("%lf", &height);

	result = hypo(base, height);
	printf("The hypotenuse of your triangle is: %.2f \n", result);
	return EXIT_SUCCESS;
}

double hypo(double base, double height)
{
	return sqrt((base * base) + (height * height));
}
