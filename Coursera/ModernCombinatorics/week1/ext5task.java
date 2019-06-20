/**
 * Copyright (C) Khudyashev Ivan, 2018
 * @author Khudyashev Ivan, bahek1983@gmail.com
 * Help program for solving combinatorics tasks
*/

public class ext5task
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2018";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
        /*
        System.out.printf("\nC(1,1) = %d", cnk(1,1));
        System.out.printf("\nC(3,1) = %d", cnk(3,1));
        System.out.printf("\nC(4,2) = %d", cnk(4,2));
        System.out.printf("\nC(6,3) = %d", cnk(6,3));
        System.out.printf("\nC(8,5) = %d", cnk(8,5));
        */
        int husb_m = 7, husb_f = 5, wife_m = 5, wife_f = 7;
        int result = 0;
        int total_each = 6;
        for(int i = 0; i < total_each; ++i) {
            result += ( cnk(husb_m, total_each - i) * cnk(wife_m, i) * cnk(husb_f, i) * cnk(wife_f, total_each - i)  );
        }
        
        System.out.printf("\nTotal = %d\n", result);
		
		// Finish
        System.out.println();
		System.out.println(finishMessage);
		System.out.println();
		
	}
    public static int cnk(int n, int k) {
        if(n < 0 || k < 0) {
            System.out.printf("\nError, negative binomial params\nn = %d, k = %d\n", n, k);
            return 0;
        }
        if(n < k) {
            System.out.printf("\nError, n < k\nn = %d, k = %d\n", n, k);
            return 0;
        }
        if(k == 0) return 1;
        int cnk = 1;
        for(int i = 0; i < k; ++i) {
            cnk *= (n - i);
            cnk /= (i + 1);
        }
        return cnk;
    }
}