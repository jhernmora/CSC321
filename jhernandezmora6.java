/*Jessenia Hernandez Mora
 * Lab 6, Java src code
 */

public class jhernandezmora6
{
	public static void main(String[] args)
	{
		int xInt = 7;
		int yInt = 3;

		int expOneI = xInt + yInt * xInt / yInt - xInt;
		int expTwoI = -xInt - yInt / xInt * yInt + xInt;
		int expThreeI = xInt + yInt - xInt / yInt;

		System.out.println("Integer Format");
		System.out.println("Expression #1: " + expOneI);
		System.out.println("Expression #2: " + expTwoI);
		System.out.println("Expression #3: " + expThreeI);
		
		double xDb = 7.7;
		double yDb = 3.3;

		double expOneD = xDb + yDb * xDb / yDb - xDb;
		double expTwoD = -xDb - yDb / xDb * yDb + xDb;
		double expThreeD = xDb + yDb - xDb / yDb;

		System.out.println("\nDouble Format");
		System.out.println("Expression #1: " + expOneD);
		System.out.println("Expression #2: " + expTwoD);
		System.out.println("Expression #3: " + expThreeD);
	}
}

