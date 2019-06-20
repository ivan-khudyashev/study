/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class InterfaceInhTest
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
		C obj = new C();
		obj.say_hello();
		obj.interface_say_hello();
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

interface A
{
	default void say_hello()
	{
		System.out.println("Hello from interface A");
	}
}

interface B //extends A
{
	default void b_say_hello()
	{
		System.out.println("Hello from interface B");
	}
}

class C implements A, B
{
	int c = 10;
	public void say_hello()
	{
		System.out.println("Hello from class C");
	}
	public void interface_say_hello()
	{
		b_say_hello();
		A.super.say_hello();
	}
}