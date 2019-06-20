/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class ConstLink
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
		MyArrayCreator<MyClass[]> mcArrayCons = MyClass[]::new;
		MyClass[] a = mcArrayCons.func(3);
		System.out.println(a.getClass().getName());
		// System.out.println(a.size());
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

interface MyArrayCreator<T> {
	T func(int n);
}

class MyClass {
	String n;
	
	public MyClass(String n) { this.n = n; }
	public MyClass() { this(""); }
	
	public void info() {
		System.out.println("MyClass.info(): n = " + this.n);
	}
}