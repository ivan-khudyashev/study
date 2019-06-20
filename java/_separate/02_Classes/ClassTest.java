/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class ClassTest
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
		Entity e = new Entity();
		System.out.println("e.a = " + e.getFirstField());
		GEntity ge = new GEntity(10);
		System.out.println("ge.c = " + ge.getFirstField());
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Entity
{
	private int a;
	private int b;
	
	public Entity(int a, int b)
	{
		this.a = a; this.b = b;
	}
	
	public Entity()
	{
		this(0, 0);
	}
	
	public int getFirstField()
	{
		return this.a;
	}
}

class GEntity extends Entity
{
	private int c;
	public GEntity()
	{
		this(0);
	}
	public GEntity(int c)
	{
		super();
		this.c = c;
	}
	public int getFirstField()
	{
		return this.c;
	}
}