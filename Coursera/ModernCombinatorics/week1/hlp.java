/**
 * Copyright (C) Khudyashev Ivan, 2018
 * @author Khudyashev Ivan, bahek1983@gmail.com
 * Help program for solving combinatorics tasks
*/

public class hlp
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2018";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
        int n = 2;
        int n2 = (int)1e6;
        int n3 = 5;
        System.out.printf("\n2&1 = %d, 1000 000 & 1 = %d, 5 & 1 = %d\n", (n&1), (n2&1), (n3&1));
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}