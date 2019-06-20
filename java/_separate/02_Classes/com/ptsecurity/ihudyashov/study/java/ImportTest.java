/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

package com.ptsecurity.ihudyashov.study.java;

import static java.lang.Math.*;

public class ImportTest
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
		double a = 1.2, b = 3.4;
		double c = sqrt( Math.pow(a, 2) + pow(b, 2) );
		System.out.printf("\na = %f, b = %f, c = sqrt(a^2 + b^2) = %f\n", a, b, c);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}