/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class MathTest
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
		
		System.out.println("e = " + Math.E);
		double a = 3.73124;
		System.out.println((int)a);
		System.out.println(Math.hypot(3.0, 4.0));
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}