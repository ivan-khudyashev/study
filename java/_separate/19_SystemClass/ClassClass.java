/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class ClassClass
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
		Class<?> c;
		A a = new A();
		c = a.getClass();
		System.out.println(c);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class A {
	int a;
	public A(){ this(0); }
	public A(int a) { this.a = a; }
}