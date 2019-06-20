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
		int i = 10;
		System.out.println((new Integer(i)).toString());
		System.out.println(String.valueOf(i));
		
		MyClass m = new MyClass(5);
		System.out.println(String.valueOf(m));
		System.out.println(m.info());
		
		
		String res;
		res = String.join("", "learn ", ",learn", ", and again learn", "!!!");
		System.out.println(res);
		
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class MyClass {
	int a;
	
	public MyClass() { this(0); }
	public MyClass(int a) { this.a = a; }
	public String info() {
		return String.valueOf(a);
	}
}