/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class StringSplit
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
		String []mas = "1.2.3.4".split("\\.");
		// String []mas = "ab%c%de".split("%");
		for(String s: mas) System.out.println(s);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}