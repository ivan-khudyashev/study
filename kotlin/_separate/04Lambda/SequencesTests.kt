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
	/*
	val l = listOf(1, 2, 3, 4)
	// println(l.map {i -> i * i})
	println(l.maxBy{it})
	val numbers = mapOf(Pair(0, "zero"), Pair(1, "one"))
	println(numbers.mapValues {it.value.toUpperCase()})
	*/
	val persons = listOf(Person("Denis", 33), Person("Ivan", 33), Person("Dan", 27), Person("Nikita", 21), Person("Oleg", 21))
	//val maxAgeSrc: Int? = persons.map(Person::age).maxBy{it}
	//val maxAge = if(maxAgeSrc == null) 0 else maxAgeSrc
	val persons2 = persons.asSequence().groupBy(Person::age).flatMap{it.value}.toList()
	//val personAgeGroup = persons.groupBy(Person::age)
	//val persons2 = personAgeGroup.flatMap{it.value}
	println(persons2)
	
	
	// End
	println(endProgramText)
}

data class Person(val name: String, val age: Int)