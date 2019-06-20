/**
 * Copyright (C) Khudyashev Ivan, 2018
 * @author Khudyashev Ivan, bahek1983@gmail.com
 * Help program for solving combinatorics tasks
*/
import java.lang.String;

public class task1_1_v
{
	public static void main(String[] args) {
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2018";
		String programInfo = "This program compute count of numbers with $digitCounts$ digit which not consists even digit in decimal representation";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
        /*
        Number n1 = new Number(1);
        Number n2 = new Number(1234);
        Number n3 = new Number(startDigit);
        Number n4 = new Number(13335);
        Number n5 = new Number(35749);
        
        System.out.printf("\nn1 = %s\nn2 = %s\nn3 = %s\n", n1.toString(), n2.toString(), n3.toString());
        System.out.printf(
            "\nn1 = %b\nn2 = %b\nn3 = %b\n\nn4 = %b\nn5 = %b", 
            n1.hasEvenDigit(), n2.hasEvenDigit(), n3.hasEvenDigit(),
            n4.hasEvenDigit(), n5.hasEvenDigit()
        );
        */
        int startDigit = (int)1e5;
        int endDigit = (int)1e6;
        int count = 0;
        /*
        int startDebugCounter = 8_000_000;
        int lengthDebugCounter = 30;
        int debugCounter = 0;
        */
        Number n = new Number();
        for(int i = startDigit; i < endDigit; ++i) {
            n.reset(i);
            if(n.hasEvenDigit()) {
                ++count;
                /*
                if(count >= startDebugCounter && debugCounter <= lengthDebugCounter) {
                    System.out.println(String.valueOf(i));
                    ++debugCounter;
                }
                */
            }
        }
        System.out.printf("\nCount of 6-digit numbers with at least one even digit = %d\n", count);

		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Number {
    private int n = 0;
    
    public Number() { this.n = 1; }
    public Number(int n) { this.n = n; }
    
    public int digitsCount() {
        int cnt = 0;
        int n = this.n;
        while(n > 0) { n /= 10; ++cnt; }
        return cnt;
    }
    public void reset(int n) { this.n = n; }
    public int[] digitsOfNumber() {
        int cntDigit = this.digitsCount();
        if(cntDigit <=0 ) {
            System.out.println("Wrong Number's size");
            return new int[1];
        }
        int [] digits = new int [cntDigit];
        int n = this.n;
        for(int i = cntDigit - 1 ; i >= 0; --i) {
            digits[i] = n%10;
            n = n/10;
        }
        return digits;
    }
    
    @Override
    public String toString() {
        int [] digits = this.digitsOfNumber();
        String s = "";
        for(int i = 0; i < digits.length - 1; i++)
            s = s.concat(String.valueOf(digits[i])).concat(", ");
        s = s.concat(String.valueOf(digits[digits.length - 1]));
        return s;
    }
    
    public boolean hasEvenDigit() {
        int [] digits = this.digitsOfNumber();
        for(int i = 0; i < digits.length; i++) {
            if((digits[i]&1) == 0) return true;
        }
        return false;
    }
}