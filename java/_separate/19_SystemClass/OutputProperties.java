/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class OutputProperties
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		String props[] = {"java.vendor", "java.home", "java.class.path", "file.separator", "java.io.tmpdir", "java.vm.name", "java.vm.vendor", "os.name", "os.version", "user.dir", "user.home", "user.name"};
		int start = 3, end = props.length;
		
		for(int i = start; i < end; i ++)
			if(props[i] != "")
				System.out.println(
					props[i] 
					+ " = " 
					+ System.getProperty(props[i])
					);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}