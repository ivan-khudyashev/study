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
	val mas1: IntArray = intArrayOf(1, 2, 3, 4)
	val mas2: IntArray = intArrayOf(8, 9, 10)
	val l = TestSpread(*mas1, 5, 6, 7, *mas2)
	println(l)
	
	// End
	println(endProgramText)
}

fun TestSpread(vararg values: Int): ArrayList<Int> {
	val l = ArrayList<Int>()
	for(el:Int in values) l.add(el)
	return l
}