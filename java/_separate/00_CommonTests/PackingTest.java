/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class PackingTest
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
		Integer n = 3;
		System.out.printf("Packed number before increment %d\n", n);
		n++;
		System.out.printf("Packed number after increment %d\n", n);
		System.out.printf("And now increment with help other method\n");
		incr(n);
		System.out.printf("Packed number after increment in method %d\n", n);
		
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
	public static void incr(Integer x)
	{
		x++;
	}
}