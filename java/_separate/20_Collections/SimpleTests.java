/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.util.*;

public class SimpleTests
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
		int[] mas = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		ArrayList<Integer> al = new ArrayList<>(mas.length << 1);
		for(int i = 0; i < mas.length; i++)
			al.add(mas[i]);
		Collection<Integer> srcCol = al;
		System.out.println("Source data:");
		outputArrayList(al);
		
		
		System.out.println("Test 1. removeIf");
		boolean res = false;
		Integer [] copyMas = new Integer[1];
		// ArrayList<Integer> copyCol = new ArrayList<>(mas.length << 1);
		Collection<Integer> workCol = null;
		copyMas = srcCol.toArray(copyMas);
		//copyCol = Arrays.asList(srcCol.toArray(copyMas));
		// copyMasToArrayList(srcCol.toArray(copyMas), copyCol);
		workCol = Arrays.asList(srcCol.toArray(copyMas));
		System.out.println(workCol.size());
		//workCol = copyCol;
		for(Integer i: workCol)
			System.out.print(i + " ");
		System.out.println(" ");
		
		
		res = workCol.removeIf((Integer el)-> el%2 == 0);
		/*
		System.out.println("Result of 1-st test = " + res);
		outputArrayList(workCol);
		*/
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
	public static void outputArrayList(Collection<Integer> al) {
		al.forEach((el)-> System.out.print(el + " "));
		System.out.println("");
	}
	
	public static void copyMasToArrayList(Integer[] a, Collection<Integer> b) {
		b.clear();
		for(int i = 0; i < a.length; i++)
			b.add(a[i]);
	}
}