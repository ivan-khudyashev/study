/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.util.Scanner;

public class TestAssertion
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
		
		// :) hack
		ClassLoader cl = TestAssertion.class.getClassLoader();
		cl.clearAssertionStatus();
		
		int n = 0;
		Scanner inputStream = new Scanner(System.in);
		System.out.print("Input number: ");
		try
		{
			n = inputStream.nextInt();
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
		assert n > 0: "Inputed number must be positive";
		double a = (double)n;
		System.out.printf("\nYou have inputed a = %f, sqrt(a) = %f\n", a, Math.sqrt(a));
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}