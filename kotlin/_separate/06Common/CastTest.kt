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
    val b = B(10, 11)
    var a = A(100)
    println("a(A) = $a")
    a = b as A
    println("a(B) = $a")
    val new_b = a as B
    println("b(after cast to A and back to B) = $new_b")
    
    var l: MutableList<A> // = mutableListOf(A(1), B(10, 11), A(2), A(3), B(20, 21))
    var l1: MutableList<B> = mutableListOf(B(10, 11), B(20, 21))
    //l = l1
    println("successfully")
	
	
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