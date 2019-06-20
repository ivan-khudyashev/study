/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class ManyArgFuncTest
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
		//double m = max(new Double(3.1), new Double(40.4), new Double(-5.0));
		double m = max(new Object[] {3.1, 40.4});
		System.out.printf("\n(1) largest value = %d\n", m);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
	
	public static double max(Object[] values)
	{
		double largest = 0.0;
		for(Object d: values)
			if((double)d > largest)
				largest = d;
		return largest;
	}
}