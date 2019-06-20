/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class Dispatch
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
		A[] li = new A[3];
		li[0] = new A();
		li[1] = new B();
		li[2] = new C();
		for(A x: li)
			x.callme();
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class A
{
	void callme()
	{
		System.out.println("In method callme() from class A");
	}
}

class B extends A
{
	void callme()
	{
		System.out.println("In method callme() from class B");
	}
}

class C extends B
{
	void callme()
	{
		System.out.println("In method callme() from class C");
	}
}