//Jessenia Hernandez Mora
//CSC 321, Final Project

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void room39game(void);

int main(int argc, char *argv[])
{
        int choice = 0;
        char name[30] = "bob";
        srand(time(NULL));

        printf("Please enter your name: ");
        scanf("%s",name);
        printf("Hello %s welcome to the RPG Game!\n",name);
        while(choice != 99)
        {
                puts("You find yourself in a dark room and you are not sure how you got here.");
                puts("As you look around you see the room has 55 doors, each labeled with a number.");
                puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
                puts("What door do you choose?");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 39:
                        {
                                puts("\n~~~~~~~Welcome to Room 39~~~~~~~\n");
 				room39game();
                                break;
                        }
		}
	}
}

void room39game(void)
{
	//passphrase made of words I grabbed from a NYT Crossword puzzle @ 'https://www.xwordinfo.com/Crossword?date=7/31/2024'
	//prompts for puzzle path were taken from the same site
	char *passphrase[5] = {"BROADCASTER", "CLOSINGTIME", "CRAMPSUP", "LEGDAY", "HACK"};
	char userGuess[100]; //for 5 tries path
	char wordBank[5][30]; //player array for 5 puzzles path
	int randNum = rand() % 10 + 1; //Random number used to determine how player has to get passphrase

        printf("Upon entering the room, the door behind you locks shut.\n");
	printf("There is a small gap underneath the door through which water is slowly seeping.\n");
	printf("There are no windows and no other way to escape except for the door you came in through.\n");
	printf("The door can only be opened by entering a five-word passphrase into a screen beside it.\n");

	if(randNum >=1 && randNum <=5)//Guess in 5 tries, should be impossible without acces to src code
	{
		printf("\nYou step in front of the screen, it reads: \n");
		printf("\t5-word passphrase required. 5 attempts remaining.\n");
		printf("\tCase-sensitive: use UPPERCASE, single space between words\n");
		int userAttempts = 5;
		getchar();

		while(userAttempts > 0)//loop for user guesses & decrement after incorrect guesses
		{
			printf("Attempt %d: ", 6 - userAttempts);
			fgets(userGuess, sizeof(userGuess), stdin);
			userGuess[strcspn(userGuess, "\n")] = 0;

			if(strcmp(userGuess, "BROADCASTER CLOSINGTIME CRAMPSUP LEGDAY HACK") == 0)	//response to successful attempt
			{
				printf("The screen flashes green, reading:\n\tCorrect!\n");
				printf("A hidden panel beside the door opens, revealing: Scuba gear!\n");
				printf("The door opens and you may now leave Room 39.\n\n");
				return;
			}
			else										//response to unsuccessful attempt
			{
				printf("The screen briefly flashes red, it reads:\n\t Incorrect.\n");
			}
			userAttempts--;
		}

		printf("The screen flashes red, reading:\n\t All attempts used. Passphrase was not guessed.\n");
		printf("The room continues to fill with water until it reaches the ceiling. Goodnight.\n");
		printf("Reviving... returning to room selection.\n\n");
		return;
	}
	else if(randNum >= 6 && randNum <= 10)//5 Puzzle questions
	{
		printf("\nYou step in front of the screen, it reads: \n");
		printf("\t5-word passphrase required. You will be given 5 prompts and 1 attempt to guess each word.\n");
		printf("\tEnter only ONE word per prompt.\n");
		printf("\tCase-sensitive: use UPPERCASE, no spaces\n");

		//BROADCASTER
		printf("Prompt 1: Television professional\n");
		printf("\tYour guess: ");
		scanf("%s", wordBank[0]);

		//CLOSINGTIME
		printf("\nPrompt 2: Not moving fast enough\n");
		printf("\tYour guess: ");
		scanf("%s", wordBank[1]);

		//CRAMPSUP
		printf("\nPrompt 3: Increases sharply\n");
		printf("\tYour guess: ");
		scanf("%s", wordBank[2]);

		//LEGDAY
		printf("\nPrompt 4: Gym session devoted to squats, dead lifts, etc.\n");
		printf("\tYour guess: ");
		scanf("%s", wordBank[3]);

		//HACK	
		printf("\nPrompt 5: Expose the vulnerabilities of, in a way\n");
		printf("\tYour guess: ");
		scanf("%s", wordBank[4]);

		//for loop printing wordBank array
		printf("\n\nPassphrase Entered: ");
		for(int i = 0; i < 5; i++)
		{
			printf("%s", wordBank[i]);
			if(i < 4)
			{
				printf(" ");
			}
		}

		//SEPARATE FROM REQUIREMENTS: Use of boolean function from '<stdbool.h>'to verify if user array 'wordBank' matches 'passphrase' array
		bool matching = true;
		for(int i = 0; i < 5; i++)
		{
			if (strcmp(wordBank[i], passphrase[i]) != 0)
			{
				matching = false;
				break;
			}
		}

		if(matching)
		{
			printf("\n\nThe screen flashes green, reading:\n\tCorrect!\n");
			printf("A hidden panel beside the door opens, revealing: Scuba gear!\n");
			printf("The door opens and you may now leave Room 39.\n");
			return;
		}
		else
		{
			printf("\n\nThe screen flashes red, reading:\n\t All attempts used. Passphrase was not guessed.\n");
			printf("The room continues to fill with water until it reaches the ceiling. Goodnight.\n");
			printf("Reviving... returning to room selection.\n\n");
			return;
		}

	}
}
