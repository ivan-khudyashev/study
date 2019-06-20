/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class TestVarArgs
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
		/*int[] t1 = {1, 2, 3}, t2 = {}, t3 = {1, 2, 3, 4, 5};
		TestVarArgs.vaTest(t1);
		TestVarArgs.vaTest(t2);
		TestVarArgs.vaTest(t3);
		*/
		TestVarArgs.vaTest(1, 2, 3);
		TestVarArgs.vaTest();
		TestVarArgs.vaTest(1);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
	
	static void vaTest(int... v)
	{
		System.out.print("Count of args: " + v.length +"  -  Content:");
		for(int x: v)
			System.out.print(x + ", ");
		System.out.println();
	}
	
	static void vaTest(int v)
	{
		System.out.println("This special ext method");
	}
	
	static void vaTest(boolean ... b)
	{
		System.out.println("This second method with ... args ");
	}
	/*
	static void vaTest()
	{
		System.out.println("This method for resolve duplicate ...");
	}
	*/
}