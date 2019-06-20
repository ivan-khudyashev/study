/*
Copyright (C) Khudyashev Ivan, 2017, bahek1983@gmail.com
*/

package com.pt.ihudyashov.test

fun main(args: Array<String>) {
	// Init vars
	val copyrightText = "Copyright (C) Khudyashev Ivan, 2017, bahek1983@gmail.com"
	val greatingText = "Greating, this program for studeing Kotlin purpose"
	val endProgramText = "Program successfully finished!"
	println(copyrightText)
	println(greatingText)
	
	// ACTION!
	println("3 leftshift 4 = " +  3.shl(4))
	println("-2 unsigned right shift 7 = " + -1.ushr(7))
	println("0b1101 & 0b0100 = " + 0b1101.and(0b0100))
	val charSymb: Char = 'A'
	println("int value of 'A' = " + charSymb.toInt())
	println("\n\nTesting embedding expressions in string literal\n")
	println("0b0110 | 0b1000 = ${0b0110.or(0b1000)}")
	
	val r1 = 1..20
	val r2 = r1.step(2)
	val r3 = r2.step(1)
	
	println("range1:")
	for(i1 in r1) print(" " + i1)
	println("\nrange2:")
	for(i1 in r2) print(" " + i1)
	println("\nrange2:")
	for(i1 in r3) print(" " + i1)
	println("");
	
	//val somevar1 = new String()
	
	
	
	// End
	println(endProgramText)
}