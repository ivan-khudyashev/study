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
	val e1: Expr = Sum(Num(2), Minus(Sum(Num(3), Num(5)), Num(7)))
	println(eval(e1))	
	
	// End
	println(endProgramText)
	
}

interface Expr

class Num(val value: Int): Expr
class Sum(val left: Expr, val right: Expr): Expr
class Minus(val left: Expr, val right: Expr): Expr

/*
fun eval(e:Expr): Int =
	if(e is Num) e.value
	else if(e is Sum) eval(e.left) + eval(e.right)
	else if(e is Minus) eval(e.left) - eval(e.right)
	else throw IllegalArgumentException("Unknown expression")
*/
fun eval(e: Expr): Int =
	when(e) {
		is Num -> e.value
		is Sum -> eval(e.left) + eval(e.right)
		is Minus -> eval(e.left) - eval(e.right)
		else -> throw IllegalArgumentException("Unknown Expression")
	}
