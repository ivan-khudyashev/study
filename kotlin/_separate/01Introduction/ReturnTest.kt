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
	val list = listOf(1, 2, 3, 4)
	
	list.forEach someLabel@ {
		if(it < 2 || it > 3) println(it)
		else return@someLabel
	}
	
	println("Code after forEach")
	
	// End
	println(endProgramText)
}