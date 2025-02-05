//Jessenia Hernandez Mora
/*CSC321
 *Lab 4
 */

import java.util.Scanner;

public class jhernandezmora4
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Pick a snack: \n\t1. Berries\n\t2. Raisins\n\t3. Chips\n\t4. Yogurt");
		System.out.print("Your choice(enter number): ");
		int userChoice = keyboard.nextInt();
		//input validate
		while(userChoice > 4 || userChoice < 1)
		{
			System.out.println("Invalid option.");
			System.out.print("Your choice(enter number): ");
			userChoice = keyboard.nextInt();
		}
		keyboard.close();

		switch(userChoice)
		{
			case 1:
				{
					System.out.println("User chose: Berries\nYum");
					break;
				}
			case 2:
				{
					System.out.println("User chose: Raisins\nGross");
					break;
				}
			case 3:
				{
					System.out.println("User chose: Nachos\nYum");
					break;
				}
			case 4:
				{
					System.out.println("User chose: Yogurt\nYum");
					break;
				}
			default:
				{
					break;
				}

		}

	}
}

