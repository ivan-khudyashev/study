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
	val a:A = A(11)
	val b:B = B(a = 22, b = 222)
	println("A class: $a")
	println("B class: $b")
	val s: Sum = Sum(Expr.Num(1), Expr.Num(1))
	println(s is Expr)
	val tstObj = object: Sum(Expr.Num(2), Expr.Num(3)) {
		override fun hello() { println("Hello I'm from some Object() class")}
	}
	println("This class of object: ${tstObj.javaClass}")
	println("Is test obj class is Sum() class: ${tstObj is Sum}")
	tstObj.hello()
	
	
	// End
	println(endProgramText)
}

open class A(val a: Int){}

class B(a: Int, val b: Int): A(a)

sealed class Expr {

	class Num(val value: Int): Expr()
}

open class Sum(val left: Expr, val right: Expr): Expr() {
	open fun hello() { println("Hello I'm from Sum() class")}
}
