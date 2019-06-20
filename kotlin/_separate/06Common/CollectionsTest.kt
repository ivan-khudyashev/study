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
	
    val l: ArrayList<A?> = arrayListOf(A(1), null, null, B(10, 11), null, A(2), A(3), B(20, 21))
    
    println("Before filter\n")
    for(i in l) print("$i ")
    println("\n\nAfter filter\n")
    
    for(i in l.filterIsInstance<A>()) print("$i ")
    println("")
    
    
	
	// End
	println(endProgramText)
}

open public class A(val a:Int) {
    override public fun toString():String {
        return "A(a = ${this.a})"
    }
}

public class B(a: Int, val b: Int): A(a) {
    override public fun toString():String {
        return "B(a = ${this.a}, b = ${this.b})"
    }
}