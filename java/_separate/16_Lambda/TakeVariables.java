/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class TakeVariables
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
		TestClass c1 = new TestClass();
		SimpleAction f1 = c1.SomeFunc();
		System.out.println("Do action with created TestClass c1 object");
		
		c1.print();
		f1.action();
		c1.print();
		
		c1.InnerDouble();
		System.out.println("Do action with c1 after modify it");
		
		c1.print();
		f1.action();
		c1.print();
		
		TestClass c2 = new TestClass(16);
		c1.InnerDouble();
		f1 = c2.SomeFunc();
		f1.action();
		
		SimpleAction f2 = c1::TestMethLink;
		f2.action();
		
		AnotherAction f3 = TestClass::TestMethLink;
		TestClass c3 = new TestClass(55);
		f3.action(c3);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class TestClass {
	int a = 10;
	int counter = 0;
	
	public TestClass(int a) { this.a = a; }
	
	public TestClass(){}
	
	public void InnerDouble() { this.a <<= 1; }
	
	public String print() {
		System.out.println(this.counter);
		return (new Integer(this.counter)).toString();
	}
	
	public SimpleAction SomeFunc() {
		int b = 1;
		b <<= this.counter;
		this.counter++;
		// SimpleAction f = () -> {System.out.println("Value in class a = " + b);};
		SimpleAction f = () -> {System.out.println("Value in class a = " + this.a); counter++;};
		System.out.println("TestClass.SomeFunc() build SimpleAction with value a = " + this.a);
		return f;
	}
	
	public void TestMethLink() {
		System.out.println("TestClass.TestMethLink() method; a = " + this.a);
	}
}

interface SimpleAction {
	public void action();
}

interface AnotherAction {
	public void action(TestClass a);
}