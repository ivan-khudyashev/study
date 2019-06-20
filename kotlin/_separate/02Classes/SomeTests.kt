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
	val str = "hello"
	println("string class = ${str.javaClass}")
	val r1 = 1..20
	println("range class = ${r1.javaClass}")
	val ch:Char = 'A'
	println("char class = ${ch.javaClass}")
	println("char to Int class = ${ch.toInt().javaClass}")
	val i = 1
	println("integer class = ${i.javaClass}")
	
	
	// End
	println(endProgramText)
}