/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class TestClone
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
		/*
		A a1 = new A(3);
		B b1 = new B();
		a1.Response();
		b1.Response();
		A a2 = a1.myclone();
		System.out.println();
		System.out.println();
		a2.Response();
		*/
		
		
		B b1 = new B(21, 111);
		System.out.println("New created object B: ");
		b1.Response();
		System.out.printf("\n\n Type of fact return value of B.myclone() = %s", b1.myclone().getClass().getName());
		System.out.println("\n\nClone of object B: ");
		b1.myclone().Response();
		
		/*
		A a = new B();
		a.getObj();
		*/
		
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class A
{
	private int a;
	public A(int a)
	{
		this.a = a;
	}
	public A() { this(0); }
	public A(A copy)
	{
		this.a = copy.a;
	}
	public void Response()
	{
		System.out.printf("class A: a = %d\n", this.a);
	}
	protected A myclone()
	{
		return new A(this.a);
	}
	public Object getObj()
	{
		System.out.println("A::Object getObj()");
		return new Object();
	}
}

class B extends A
{
	private int b;
	public B(int a, int b)
	{
		super(a);
		this.b = b;
	}
	public B(int b) 
	{ 
		this.b = b; 
	}
	public B() { this(10, 100); }
	public B(A baseA)
	{
		super(baseA);
		this.b = 200;
	}
	public void Response()
	{
		System.out.printf("class B\n--------\n");
		super.Response();
		System.out.printf("b = %d\n--------\n", this.b);
	}
	
	public B myclone()
	{
		B newObj = new B(super.myclone());
		newObj.b = this.b;
		return newObj;
	}
	
	public String getObj()
	{
		System.out.println("B::String getObj()");
		return "B";
	}
}