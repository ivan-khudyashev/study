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
	val a = Permutation(2, arrayOf(5, 10))
	println(a)
	
	
	// End
	println(endProgramText)
}

// class Permutation(val length: Int, val state: Array)
class Permutation {
	val length: Int
	val state: Array<Int>
	constructor(length: Int, state: Array<Int>) {
		this.length = if(length > state.size) length else state.size
		this.state = state
	}
	override fun toString():String = "permutation's length = $length \n values= $state"
}