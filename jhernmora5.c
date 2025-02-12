//Jessenia Hernandez Mora
//CSC321
//LAB #5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	//Step #1: Declare 4 different types of variables and initialize them with a value.
	int i, x = 0;
	double y = 7.3;
	char z = 'j';
	float a = 3.7;

	//int arr[10] = {0};
		
	//Step #2: Print the address and value of each variable.
	printf("The value of x is %d and its address is %p \n", x, &x);
	printf("The value of y is %f and its address is %p \n", y, &y);
	printf("The value of z is %c and its address is %p \n", z, &z);
	printf("The value of a is %f and its address is %p \n", a, &a);

	//Step #3: Create a block of code like an "if" statement. Within the scope of the "if" statement; 
	//within the braces, declare and initialize a variable. Try using the variable outside of the scope 
	//without re-declaring it. take a screenshot of the error. Comment out the statement that is out 
	//of scope before you submit your program.
	{
		int y = 10;
	}
	//printf("The value of y is %d \n", y);

	//Step #4: Create an array of size 10, initialize each element as a different number, and show 
	//that the array does take contiguous space by printing out the addresses.
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(i = 0; i < 10; i++)
	{
		printf("The value of this number is %d and its address is arr[%d] = %p \n", arr[i], i, &arr[i]);
	}

	return EXIT_SUCCESS;
}

