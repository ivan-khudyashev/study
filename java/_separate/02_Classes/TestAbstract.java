/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class TestAbstract
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
		Person h; //= new Person("Ivan");
		//h.print();
		h = new Worker("Ivan", "PT", "reseacher");
		h.print();
		System.out.println(h.getDescription());
		
		h = new Student("Khudyashev Ivan", "TSU", "FPMK");
		h.print();
		System.out.println(h.getDescription());
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

abstract class Person
{
	private String name;
	public Person(String name) { this.name = name; }
	public abstract String getDescription();
	public void print()
	{
		System.out.println("Person with name: " + name);
	}
	public String getName() {return name;}
}

class Worker extends Person
{
	private String place;
	private String post;
	public Worker(String name, String place, String post)
	{
		super(name);
		this.place = place;
		this.post = post;
	}
	public void print()
	{
		System.out.println("Print in class Worker");
	}
	public String getDescription()
	{
		return String.format("Worker %s work on %s in post %s", super.getName(), this.place, this.post);
	}
}
class Student extends Person
{
	private String vuz;
	private String faculty;
	public Student(String name, String vuz, String faculty)
	{
		super(name);
		this.vuz = vuz;
		this.faculty = faculty;
	}
	public void print()
	{
		System.out.println("Print in class Student");
	}
	public String getDescription()
	{
		return String.format("Student %s study in %s on facult %s", super.getName(), this.vuz, this.faculty);
	}
}