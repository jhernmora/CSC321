//Jessenia Hernandez Mora
//CSC321, Midterm src

import java.util.Scanner;

public class midterm
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Guess a number between 1-10: ");
		int guess = keyboard.nextInt();
		keyboard.close();

		//System.out.println(guess);
		
		int correct = 7;
		if(guess == correct)
		{
			System.out.println("Congratulations, you guessed correctly!");
			System.out.println("You win a can of tuna!");
		}
		else
		{
			System.out.println("You did not guess the number correctly.");
			System.out.println("Yikes.");
		}
	}
}
