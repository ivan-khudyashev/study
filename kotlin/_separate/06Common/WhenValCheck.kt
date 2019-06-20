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
	val p = Person("ivan", A())
	when(p.someField) {
		is A ->  p.someField .aInform()
		is B ->  p.someField.bInform()
		else -> println("Unknown case")
	}
	
	/*
	var p = Person("ivan", 20)
	p.age = 20
	when {
	p.age <= 20 -> println("less 20")
	p.age >= 21 -> println("equal or greater then 21 :)")
	// else -> println("other number")
	}
	*/
	
	
	// End
	println(endProgramText)
}

interface MyInterface { fun myFunc()}

class A: MyInterface {
	override fun myFunc() {println("A:myFunc()")}
	fun aInform() {println("A.aInform()")}
}

class B: MyInterface {
	override fun myFunc() {println("B:myFunc()")}
	fun bInform() {println("B.bInform()")}
}
class Person(val name: String, val someField: MyInterface)