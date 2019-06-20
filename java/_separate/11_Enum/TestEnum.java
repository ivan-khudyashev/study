/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/



enum ProcessorMaker {amd, intel, motorolla, samsung}

public class TestEnum
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
		Object o = new Object();
		Object num = new Integer("111_222");
		System.out.println(num);
		ProcessorMaker m1 = ProcessorMaker.intel;
		switch(m1) {
			case intel: 
				System.out.println("Intel");
				break;
			default:
				System.out.println("Unknown");
		}
		
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}