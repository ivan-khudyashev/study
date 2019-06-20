// (C) Copyright Khudyashev Ivan, 2017, bahek1983@gmail.com

public class Polimorph
{
	public static void main(String[] args)
	{
		B[] masB = new B[5];
		somepackage.A[] masA = masB;
		masA[0] = new B();
		masA[0].PrintVals();
		//x2.PrintVals();
		somepackage.A t = new somepackage.A();
		System.out.println("\nInternal field in internal class A: sometest = " + t.sometest);
	}
}