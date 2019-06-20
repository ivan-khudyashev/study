/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class ClassConstants
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
		Test b = new Test(1);
		//b.a = 1;
		Test c = new Test(2);
		//c.a = 2;
		
		System.out.println("b.a = " + b.a);
		System.out.println("c.a = " + c.a);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Test
{
	public final int a;
	public Test(int aa){ this.a = aa;}
}