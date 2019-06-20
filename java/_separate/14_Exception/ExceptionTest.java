/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class ExceptionTest
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
		boolean testFlag = true;
		try {
			System.out.println("Outer TRY block");
			try {
				System.out.println("Inner TRY block");
				throw new MyException("Exception in Inner TRY block");
			}
			catch(Exception e) {
				System.out.println("Inner CATCH block");
				System.out.println("RETURN!!!");
				if(testFlag)
					return ;
			}
			finally {
				System.out.println("Inner FINALLY block");
			}
			System.out.println("Outer TRY after inner TRY block");
		}
		catch(Exception e) {
			System.out.println("Outer CATCH block");
		}
		finally {
			System.out.println("Outer FINALLY block");
		}
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class MyException extends Exception {
	String message;
	public MyException(String message) { this.message = message; }
	@Override
	public String toString() { 
		return String.format("Exception MyException with message %s", this.message);
	}
}