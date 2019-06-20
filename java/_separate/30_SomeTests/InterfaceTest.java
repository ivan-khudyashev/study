/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class InterfaceTest
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
        SomeClass b = new SomeClass();
        b.meth(11);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

interface BaseInt {
    default void bmeth() {
        System.out.println("BaseInt interface, bmeth() default method");
    }
}

interface SomeInt {
    void meth(int a);
    default void bmeth() {
        System.out.println("SomeInt interface, bmeth() default method");
    }
}

class SomeClass implements SomeInt, BaseInt {
    int v = 0;
    
    public void bmeth() {
        System.out.println("SomeClass class, bmeth() default method");
    }
    
    public void meth(int a) {
        System.out.println("class SomeClass, a = " + Integer.toString(a));
        SomeInt.super.bmeth();
        BaseInt.super.bmeth();
    }
}