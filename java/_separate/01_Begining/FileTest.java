/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.util.Scanner;
import java.nio.file.Paths;
import java.io.*;

public class FileTest
{
	public static void main(String[] args) throws IOException
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		Scanner f1 = new Scanner(Paths.get("Hello.java"), "UTF-8");
		for(int i = 0; i < 5; i ++)
			System.out.print(f1.nextLine());
		
		// Actions!
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}