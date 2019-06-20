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
	val findMax = {
		mas: Array<Int>, startIndex: Int ->
		if(startIndex > mas.size) throw IllegalArgumentException("Wrong Index for finding in massive")
		var i = startIndex
		var maxElement = Int.MIN_VALUE
		while(i < mas.size) {
			if(mas[i] > maxElement)
				maxElement = mas[i]
			++i
		}
		maxElement
	}
	println(findMax(arrayOf(-2, -3, -10, -40, -100), 0))
	println(findMax(arrayOf(10, 555, 1024, 20, 59), 0))
	println(findMax(arrayOf(10, 555, 1024, 20, 59), 3))
	
	
	// End
	println(endProgramText)
}
