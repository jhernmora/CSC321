//Jessenia Hernandez Mora
//CSC321, Lab 10

import java.util.Scanner;

public class jhernmora10
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);

		System.out.println("To find the volume of a cylinder, enter the following: ");
		System.out.print("Radius: ");
		double radius = keyboard.nextDouble();
		System.out.print("Height: ");
		double height = keyboard.nextDouble();
		
		keyboard.close();

		double volume = volume(radius, height);
		System.out.println("Volume: " + volume);
	}

	static double volume(double radius, double height)
	{
		return Math.PI * (radius * radius) * height;
	}
}
