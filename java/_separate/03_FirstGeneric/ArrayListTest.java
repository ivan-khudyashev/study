/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

import java.util.ArrayList;

public class ArrayListTest
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
		ArrayList<Employee> m = new ArrayList<>(5);
		System.out.printf("Size of arrayList withot elems = %d\n", m.size());
		m.add(new Employee());
		System.out.printf("Size of arrayList after add one elem = %d\n", m.size());
		System.out.printf("Content of ArrayList\n");
		m.add(new Employee("worker", 50000, "somepost"));
		for(Employee e: m)
			System.out.printf("Next employee: %s\n", e.toString());
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Employee
{
	private String name = "";
	private int salary = 0;
	private String post = "";
	public Employee(String name, int salary, String post)
	{
		this.name = name; this.salary = salary; this.post = post;
	}
	public Employee()
	{
		this("Khudyashev Ivan", 100000, "reseacher");
	}
	@Override public String toString()
	{
		String employeeStrFormat = String.format("Employee %s in post %s with salary %d", this.name, this.post, this.salary);
		return employeeStrFormat;
	}
}