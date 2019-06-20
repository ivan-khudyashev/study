/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.lang.annotation.Repeatable;
import java.lang.annotation.Retention;
import java.lang.annotation.Annotation;
import java.lang.annotation.RetentionPolicy;
import java.lang.reflect.*;
//import java.lang.reflect.Method;
// import java.lang.reflect.Class;

@Retention(RetentionPolicy.RUNTIME)
@Repeatable(MyRepeatedAnnos.class)
@interface MyAnno {
	String str() default "hello";
	int cnt() default 100;
}

@Retention(RetentionPolicy.RUNTIME)
@interface MyRepeatedAnnos {
	MyAnno[] value();
}

public class RepeatAnno
{
	@MyAnno(str = "first", cnt = 1)
	@MyAnno(str = "second", cnt = 2)
	@MyAnno()
	public static void myMeth(String s, int i) 
	{
		RepeatAnno o = new RepeatAnno();
		try {
			Class<?> c = o.getClass();
			
			Method m = c.getMethod("myMeth", String.class, int.class);
			
			/*
			MyAnno[] a = m.getAnnotationsByType(MyAnno.class);
			for(MyAnno nextA: a) {
				System.out.println("Next annotation" + nextA.toString());
			}
			*/
			
			Annotation a = m.getAnnotation(MyRepeatedAnnos.class);
			System.out.println("Class for annotation: " + a.getClass().getName());
			if(a instanceof MyRepeatedAnnos)
				System.out.println("Returned Annotation a is instance of MyRepeatedAnnos");
			else
				System.out.println("Returned Annotation a is NOT instance of MyRepeatedAnnos");
			
			if(a instanceof MyAnno)
				System.out.println("Returned Annotation a is instance of MyAnno");
			else
				System.out.println("Returned Annotation a is NOT instance of MyAnno");
			
		}
		catch(NoSuchMethodException e)
		{
			System.out.println("Can't find method");
		}
	}
	
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		myMeth("test", 333);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}