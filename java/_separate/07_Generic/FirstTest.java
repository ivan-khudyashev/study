/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class FirstTest
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "Test Generic";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		Pair<Integer> x = new Pair<Integer>(10, 11);
		System.out.println(x.toString());
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Pair<T>
{
	private T first;
	private T second;
	public Pair() { first = null; second = null; }
	public Pair(T first, T second)
	{ this.first = first; this.second = second; }
	
	public T getFirst() { return first; }
	public T getSecond() { return second; }
	
	@Override public String toString()
	{
		return String.format("{\n  first = %s\n,\n  second = %s\n}\n", first.toString(), second.toString());
	}
}