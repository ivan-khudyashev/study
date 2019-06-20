/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.util.Scanner;
import java.util.logging.Logger;
import java.util.logging.Handler;
import java.util.logging.ConsoleHandler;
import java.util.logging.Level;

public class TestLogging
{
	private static final Logger myLogger = Logger.getLogger("khudyashev.ivan.logger");
	private static final String className = TestLogging.class.getName();
	public static void main(String[] args)
	{
		TestLogging.myLogger.setLevel(Level.FINER);
		TestLogging.myLogger.setUseParentHandlers(false);
		Handler hndlr = new ConsoleHandler();
		hndlr.setLevel(Level.FINER);
		TestLogging.myLogger.addHandler(hndlr);
		TestLogging.myLogger.entering(TestLogging.className, "main()");
		
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		TestLogging.myLogger.log(Level.INFO, "Start action");
		int n = 0;
		Scanner inputStream = new Scanner(System.in);
		System.out.print("Input number: ");
		try
		{
			n = inputStream.nextInt();
		}
		catch(Exception e)
		{
			e.printStackTrace();
			TestLogging.myLogger.throwing(TestLogging.className, "main()", e);
		}
		assert n > 0: "Inputed number must be positive";
		double a = (double)n;
		System.out.printf("\nYou have inputed a = %f, sqrt(a) = %f\n", a, Math.sqrt(a));
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
		TestLogging.myLogger.exiting(TestLogging.className, "main()");
	}
}