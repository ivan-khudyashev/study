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
	val x = SomeClass(5)
	x.func1()
	x.func2()
	
	
	// End
	println(endProgramText)
}

interface SomeInterface {
	fun func1()
}

class SomeClass(val a: Int): SomeInterface {
	override fun func1() {println("class SomeClass; method func1()")}
}

fun SomeInterface.func2() {println("interface SomeInterface; method func2()")}