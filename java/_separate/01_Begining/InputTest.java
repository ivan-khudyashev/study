/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

import java.util.*;

public class InputTest
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		Scanner in = new Scanner(System.in);
		
		// Actions!
		System.out.println("Input string:");
		String str = in.nextLine();
		System.out.println("You have inputed string: " + str);
		System.out.print("Now input INT:");
		int a = in.nextInt();
		System.out.printf("%nYou input: %,_d", a/2.0);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}