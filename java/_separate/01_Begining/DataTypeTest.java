/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class DataTypeTest
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		int intNum = 1_000_000;
		float floatNum = 1e-3F;
		float float16PSNum = 0xaa.cp-2F;
		// float positiveInfinity = 1/0;
		//float nanNumber = 0/0;
		char tradeMarkChar = '\u2122';
		String tradeMarkString = "Sony\u2122";
		
		// Actions!
		System.out.print("Integer number: ");System.out.println(intNum);
		System.out.print("Float number: ");System.out.println(floatNum);
		System.out.print("Float 16PS number: ");System.out.println(float16PSNum);
		//System.out.print("Positive infinity number: ");System.out.println(positiveInfinity);
		//System.out.print("Not a number: ");System.out.println(nanNumber);
		System.out.print("TM string: ");System.out.println(tradeMarkString);
		System.out.print("TM char: ");System.out.println(tradeMarkChar);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}