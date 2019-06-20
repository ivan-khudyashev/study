/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class PkgTest
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
		
		Package pkgs[];
		pkgs = Package.getPackages();
		
		for(int i = 0; i < pkgs.length; i++)
			System.out.println(
				pkgs[i].getName() + " " +
				pkgs[i].getImplementationTitle() + " " +
				pkgs[i].getImplementationVendor() + " " +
				pkgs[i].getImplementationVersion()
			);
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}