/*Jessenia Hernandez Mora
 * Lab 6, C src code
 */

#include <stdio.h>

int main()
{
	int xInt = 7;
	int yInt = 3;

	int expOneI = xInt + yInt * xInt / yInt - xInt;
	int expTwoI = -xInt - yInt / xInt * yInt + xInt;
	int expThreeI = xInt + yInt - xInt / yInt;

	printf("Integer Format\n");
	printf("Expression #1: %d\n", expOneI);
	printf("Expression #2: %d\n", expTwoI);
	printf("Expression #3: %d\n", expThreeI);

	double xDb = 7.7;
	double yDb = 3.3;

	double expOneD = xDb + yDb * xDb / yDb - xDb;
	double expTwoD = -xDb - yDb / xDb * yDb + xDb;
	double expThreeD = xDb + yDb - xDb / yDb;

	printf("\nDouble Format\n");
	printf("Expression #1: %lf\n", expOneD);
	printf("Expression #2: %lf\n", expTwoD);
	printf("Expression #3: %lf\n", expThreeD);

	return 0;
}
