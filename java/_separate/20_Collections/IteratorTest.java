/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Collection;

public class IteratorTest
{
	public static int MaxValue = 100;
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		int listSize = 10, testCountStep = 5;
		ArrayList<Integer> al = new ArrayList<>(listSize);
		IteratorTest.fillListRandom(al, listSize);
		Iterator<Integer> iter = al.iterator();
		System.out.println("hello" + al.size());
		iter.forEachRemaining((Integer el) -> System.out.print(el + " "));
		System.out.println("");
		
		iter = al.iterator();
		for(int i = 0; i < testCountStep; i++)
			iter.next();
		iter.forEachRemaining((Integer el) -> System.out.print(el + " "));
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
	
	public static void fillListRandom(Collection<Integer> cl, int len) {
		for(int i = 0; i < len; i++)
			cl.add((int)(IteratorTest.MaxValue * Math.random()));
	}
}