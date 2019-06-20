// (C) Copyright Khudyashev Ivan, 2017, bahek1983@gmail.com

import java.util.Scanner;

public class Echo
{
	public static void main(String[] args)
	{
		//Init vars
		String greetingMsg = "(C) Copyright Khudyashev Ivan, 2017, bahek1983@gmail.com";
		String finilizeMsg = "Programm successfully completed!";
		
		System.out.println(greetingMsg);
		// Actions
		Scanner reader = new Scanner(System.in, "CP866");
		System.out.println("Input string:");
		String str = reader.nextLine();
		System.out.println(str);
		
		// Finalize
		System.out.println(finilizeMsg);
	}
}