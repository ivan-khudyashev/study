/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class InnerTest
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
		Outer.Inner iObj = (new Outer(6.0)).getInnerObj(5);
		System.out.println(iObj);
		Outer o = new Outer(4.0);
		iObj = o.new Inner(11);
		System.out.println(iObj);
		/*
		Outer.Inner iObj2 = new Outer.Inner(10);
		System.out.println(iObj2);
		*/
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Outer {
	double d;
	public Outer(double d) { this.d = d; }
	class Inner {
		private int n;
		public Inner(int n) { this.n = n; }
		@Override
		public String toString() { return String.format("Value in SomeClass.d = %f and in Inner.n = %d", Outer.this.d, this.n); }
		// public String toString() {return String.format("Inner obj with n = %d", this.n); }
	}
	public Inner getInnerObj(int n) {
		return new Inner(n);
	}
}

class SomeClass {
	double d;
	public SomeClass(double d) { this.d = d; }
	@Override
	public String toString() { return String.format("Value in SomeClass.d = %f", this.d); }
}