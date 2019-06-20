/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class GetMax
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		int n = max(1, -5, 10, 25);
		System.out.printf("Max number from (1, -5, 10, 25): %d\n", n);
		n = max(256, 13421,48383,123444);
		System.out.printf("Max number from (256, 13421,48383,123444): %d\n", n);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
	public static int max(int... values)
	{
		int largest = Integer.MIN_VALUE;
		for(int n: values)
			if(n > largest)
				largest = n;
		return largest;
	}
}