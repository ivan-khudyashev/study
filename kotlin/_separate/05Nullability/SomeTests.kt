/*
Copyright (C) Khudyashev Ivan, 2017, bahek1983@gmail.com
*/

package testpack.somepack

fun main(args: Array<String>) {
	// Init vars
	val copyrightText = "Copyright (C) Khudyashev Ivan, 2017, bahek1983@gmail.com"
	val greatingText = "Greating, this program for studeing Kotlin purpose"
	val endProgramText = "Program successfully finished!"
	println(copyrightText)
	println(greatingText)
	
	// ACTION!
	val a: A = A()
	a.someProp = 10
	println(a.someProp)
	
	
	// End
	println(endProgramText)
}

class A {
	var someProp: Int = 0
}