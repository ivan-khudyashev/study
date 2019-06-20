/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

import java.util.*;

public class CollectionTest
{
	public static void main(String[] args) {
		test1();
	}
	static void test1()
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		ArrayList<Person> al = new ArrayList<>(20);
		al.add(new Person("Perminov", "Sergey", 20));
		al.add(new Person("Ivanov", "Semen", 12));
		al.add(new Person("Arakcheev", "Bogdan", 31));
		al.add(new Person("Yaselnikov", "Kuzma", 52));
		al.add(new Person("Petrov", "Vasiliy", 23));
		al.add(new Person("Petrov", "Sergey", 33));
		al.add(new Person("Perminov", "Sergey", 18));
		al.add(new Person("Kuznecov", "Semen", 45));
		al.add(new Person("Coy", "Kuzma", 82));
		System.out.println("Source data");
		System.out.println(al);
		
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Person implements Comparable<Person> {
	String lastname;
	String firstname;
	int age;
	
	public Person() { this("Ivanov", "Ivan", 20); }
	public Person(String lastname, String firstname, int age) {
		this.lastname = lastname;
		this.firstname = firstname;
		this.age = age;
	}
	
	public int getAge() { return this.age; }
	public String getLastname() { return this.lastname; }
	public String getFirstname() { return this.firstname; }
	
	public String toString() {
		return this.lastname + " " + this.firstname + " age = " + this.age;
	}
	
	public int compareTo(Person p) {
		int compareResult = this.lastname.compareTo(p.lastname);
		if(compareResult != 0)
			return compareResult;
		compareResult = this.firstname.compareTo(p.firstname);
		if(compareResult != 0)
			return compareResult;
		if(this.age > p.age)
			return 1;
		if(this.age < p.age)
			return -1;
		return 0;
	}
	
	@Override
	public boolean equals(Object p) {
		if(p.getClass() != Person.class)
			throw new IllegalArgumentException();
		Person pArg = (Person)p;
		if(this.compareTo(pArg) != 0)
			return false;
		return true;
	}
}