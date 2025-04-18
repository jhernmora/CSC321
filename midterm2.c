//Jessenia Hernandez Mora
//CSC321, Midterm 2 .c src

#include <stdio.h>
#include <stdlib.h>

void print(int numPrint);

int main(void)
{
	int numPrint;
	printf("How many times should we print my name?: ");
	scanf("%d", &numPrint);

	print(numPrint);
	return EXIT_SUCCESS;
}

void print(int numPrint)
{
	for(int i = 0; i < numPrint; i++)
	{
		printf("Jess\n");
	}
}
