/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class TestVirtualMeth
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
        A a = new A();
        B b = new B();
        C c = new C();
        A[] ai = {a, b, c};
        for(A i: ai) i.test();
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class A {
    int a = 1;
    
    public void test() {
        System.out.println("\n\nClass A, a = " + Integer.toString(this.a) + "\n\n");
    }
}

class B extends A {
    int b = 2;
    
    public void test() {
        System.out.println("\n\nClass B, b = " + Integer.toString(this.b));
        System.out.println("Class B, super.a = " + Integer.toString(super.a) + "\n\n");
    }
}

class C extends B {
    int c = 3;
    
    public void test() {
        System.out.println("\n\nClass C, c = " + Integer.toString(this.c));
        //System.out.println("Class C, super.a = " + Integer.toString(A.super.a));
        System.out.println("Class C, super.b = " + Integer.toString(super.b) + "\n\n");
    }
}