/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/


public class VarLenArgsTest
{
	// public static final String SomeString = "SomeString";
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		myPrint(1, 5, 1, 2, 3);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
	
	public static void myPrint(Integer... a) {
		for(Integer i: a) System.out.print(i.toString() + " ");
		System.out.printf("\n%s", a.getClass().getName());
	}
}
