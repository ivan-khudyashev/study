// (C) Khudyashev Ivan, 2017, bahek1983@gmail.com

import java.util.*;

public class Read2Number
{
	public static void main(String[] args)
	{
		// Init vars
		String greetingMsg = "(C) Khudyashev Ivan, 2017, bahek1983@gmail.com";
		String endingProgramMsg = "Program successfully finished";
		
		System.out.println(greetingMsg);
		// Actions
		Scanner inputNumber = new Scanner(System.in);
		System.out.print("Input first number: ");
		int n1 = inputNumber.nextInt();
		System.out.println();
		System.out.print("Input second number: ");
		int n2 = inputNumber.nextInt();
		System.out.println("You have inputed n1 = " + n1 + " and n2 = " + n2);
		
		// Ending
		System.out.println(endingProgramMsg);
	}
}