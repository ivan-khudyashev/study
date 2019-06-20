/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class StringTest
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
		String s1 = String.join("B, ", "K", "M", "G", "\b\b");
		System.out.println(s1);
		System.out.println("\n\ntoString Tests:");
		int i1 = 10, i2 = 1000000, mas[] = {1, 2, 3, 4, 5};
		double d1 = 1234.13214;
		Object o1 = i2, o2 = mas;
		System.out.println(i1);
		System.out.println(o1);
		System.out.println(d1);
		System.out.println(o2);
		System.out.println();
		System.out.println();
		System.out.println();
		char a = 'A';
		System.out.printf("code of A = %d", (int)a);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}