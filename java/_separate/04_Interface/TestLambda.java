/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.util.function.IntPredicate;

public class TestLambda
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
		Runnable a = () -> System.out.println("Hello, lambda");
		a.run();
		
		IntPredicate p = (i) -> { return i>5&&i!=10; };
		
		System.out.printf("\nResult of test 2: %b", p.test(2));
		System.out.printf("\nResult of test 20: %b", p.test(20));
		System.out.printf("\nResult of test 10: %b", p.test(10));
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

