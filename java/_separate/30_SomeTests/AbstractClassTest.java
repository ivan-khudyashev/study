/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class AbstractClassTest
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
        B b = new B(11, 15, 17);
        b.show();
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}


abstract class A {
    int a1;
    int a2;
    public A(int a1, int a2) {
        this.a1 = a1;
        this.a2 = a2;
    }
    abstract void show();
}

class B extends A {
    int b;
    public B(int a1, int a2, int b) {
        super(a1, a2);
        this.b = b;
    }
    
    public void show() {
        System.out.println("Class B\nsuper.a1 = " + super.a1 + ", super.a2 = " + super.a2 + "\nb = " + b);
    }
}



