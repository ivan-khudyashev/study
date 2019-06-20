/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class SimpleTests
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
		Double d = new Double(1);
		Float f = new Float(2);
		System.out.println("Double.BYTES = " + Double.BYTES);
		System.out.println("Double.MIN_NORMAL = " + Double.MIN_NORMAL);
		System.out.println("Double.SIZE = " + Double.SIZE);
		System.out.println("Float.BYTES = " + Float.BYTES);
		
		Integer i1 = new Integer(3);
		Integer i2 = Integer.valueOf(3);
		System.out.println("i1 = " + i1 + " and i2 = " + i2 + " are (i1 == i2) ===" + (i1 == i2));
		System.out.println(Character.forDigit(16, 10));
		System.out.println(Character.digit('b', 12));
		//System.out.println();
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}