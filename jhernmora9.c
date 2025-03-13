/* Jessenia Hernandez Mora
 * CSC321
 * Lab 9, .c src
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	//Step 1: Create a random number between 1 and 20.
	srand(time(NULL));
	int randNum = 1 + (rand() %20);
	//printf("Rand num: %d\n", randNum);
	
	/* Step 2: Ask a user to guess a number between 1 and 20.
	 * Step 3: If the user enters a number outside of this range, make them re-enter the number.
	 */
	int user;
	printf("Guess a number between 1 and 20: ");
	scanf("%d", &user);
	while(user < 1 || user > 20)
	{
		printf("Out of range, try again: ");
		scanf("%d", &user);
	}
	
	/* Step 4: If the user does not guess the number, tell them they lost and let them know that the
	 * guess is higher or lower than the correct number.
	 * Step 5: If the user wins, print out a win message that prints as many times as the number they guessed.
	 */
	if(user > randNum)
	{
		printf("Your guess was too high. The number was %d.\n", randNum);
	}
	else if(user < randNum)
	{
		printf("Your guess was too low. The number was %d.\n", randNum);
	}
	else
	{
		for (int i = 0; i < user; i++)
		{
			printf("You won and guessed correctly!\n");
		}
	}
	return EXIT_SUCCESS;
}
