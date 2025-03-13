/* Jessenia Hernandez Mora
 * CSC 321
 * Lab 9, .java src
 */

import java.util.Scanner;
import java.util.Random;
public class jhernmora9
{
	public static void main(String args[])
	{
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();

		//Step 1: Create a random number between 1 and 20.
		int randNum = rand.nextInt(20) + 1;
		//System.out.println("Rand Num: " + randNum);

		//Step 2: Ask a user to guess a number between 1 and 20.
		System.out.print("Guess a number between 1 and 20: ");
		int user = keyboard.nextInt();

		//Step 3: If the user enters a number outside of this range, make them re-enter the number.
		while(user < 1 || user > 20)
		{
			System.out.print("Out of range, try again: ");
			user = keyboard.nextInt();
		}

		/* Step 4: If the user does not guess the number, tell them they lost and let them know that 
		 * 	   the guess is higher or lower than the correct number.
		 * Step 5: If the user wins, print out a win message that prints as many times as the number they guessed.
		 */
		if(user > randNum)
		{
			System.out.println("Your guess was too high. The number was " + randNum + ".");
		}
		else if(user < randNum)
		{
			System.out.println("Your guess was too low. The number was " + randNum + ".");
		}
		else
		{
			for(int i = 0; i < user; i++)
			{
				System.out.println("You won and guessed correctly!");
			}
		}

		keyboard.close();
	}
}
