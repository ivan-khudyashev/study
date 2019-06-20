/*
Copyright (C) Khudyashev Ivan, 2017, bahek1983@gmail.com
*/

fun main(args: Array<String>) {
	// Init vars
	val copyrightText = "Copyright (C) Khudyashev Ivan, 2017, bahek1983@gmail.com"
	val greatingText = "Greating, this program for studeing Kotlin purpose"
	val endProgramText = "Program successfully finished!"
	println(copyrightText)
	println(greatingText)
	
	// ACTION!
	/*
	val e1 = Employee("Ivan", 33, 10)
	val e2 = Employee("Ivan", 33, 23)
	println(e1 == e2)
	println(e1.equals(e2))
	val s1 = setOf(Employee("Ivan", 33, 15))
	println(s1.contains(Employee("Ivan", 33, 20)))
	*/
	val s1 = Student("ivan", 20)
	val s2 = Student("ivan", 20)
	println(s1 == s2)
	
	
	// End
	println(endProgramText)
}

class Employee(val name: String, val age: Int, val expirience: Int = 0) {
	override fun equals(other: Any?): Boolean {
		if(other == null || other !is Employee)
			return false
		return this.name == other.name && this.age == other.age
	}
	/*
	fun equals(anotherEmp: Employee): Boolean {
		return false
	}*/
}


data class Student(private var name: String, var age: Int) {
	var faculty: String = ""
}