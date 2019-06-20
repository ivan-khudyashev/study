/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.util.*;

public class MassivTest
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
		Scanner stdin = new Scanner(System.in);
		System.out.print("Input length of massive: ");
		int masLen = stdin.nextInt();
		if(masLen < 0 || masLen > 100)
		{
			System.out.println("Massive's length must be: 0<x<100");
			System.exit(-1);
		}
		int nums[] = new int[masLen], i;
		for(i = 0; i < masLen; i++)
		{
			nums[i] = i + 1;
		}
		
		for(i = 0; i < masLen; i++)
		{
			System.out.printf("nums[%d] = %d\n", i, nums[i]);
		}
		System.out.println("Alternative view.");
		for (int nextEl: nums)
		{
			System.out.println(nextEl);
		}
		System.out.println("One more alternative.");
		System.out.println(Arrays.toString(nums));
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}