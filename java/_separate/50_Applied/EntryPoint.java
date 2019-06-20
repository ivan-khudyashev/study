/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
package khudyashev.algebra;

import java.util.*;

public class EntryPoint
{
	public static void main(String[] args)
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "This program define transitive binary relationship based on source relationship";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		/*
		Pair[] p1 = { new Pair(1, 2), new Pair(2, 4) };
		Pair[] p2 = { new Pair(4,2) };
		Pair[] p3 = { new Pair(2,2) };
		Pair[] p4 = { new Pair(2, 4), new Pair(1, 2) };
		Relationship r1 = new Relationship(p1);
		System.out.println("First relationship");
		System.out.println(r1);
		
		Relationship r2 = new Relationship(p2);
		System.out.println("Second relationship");
		System.out.println(r2);
		
		Relationship rmul = r1.multiply(r2);
		System.out.println("r1 * r2");
		System.out.println(rmul);
		
		
		Relationship r3 = new Relationship(p3);
		Relationship r4 = new Relationship(p4);
		System.out.printf("\nr1 == r2: %b\n", r1.equals(r2));
		System.out.printf("\nr3 == rmul: %b\n", r3.equals(rmul));
		System.out.printf("\nr1 == r4: %b\n", r1.equals(r4));
		*/
		
		Pair[] p1 = { new Pair(1, 2), new Pair(2, 4), new Pair(4, 5) };
		Relationship r1 = new Relationship(p1);
		Relationship r1Closure = r1.transitClosure();
		System.out.println("Sourece relationship");
		System.out.println(r1);
		System.out.println("Transitive closure of relationship");
		System.out.println(r1Closure);
		
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class Relationship {
	private TreeSet<Pair> elements;
	private ArrayList<Integer> firstEl;
	private ArrayList<Integer> secondEl;
	
	public Relationship() { this(new Pair[0]); }
	public Relationship(Pair[] mas) {
		this.elements = new TreeSet<Pair>();
		this.firstEl = new ArrayList<Integer>(mas.length);
		this.secondEl = new ArrayList<Integer>(mas.length);
		int curIndex = 0;
		for(Pair p: mas)
			this.addElement(p);
	}
	
	public boolean addElement(Pair p) {
		if(this.elements.contains(p)) return false;
		this.elements.add(p);
		this.firstEl.add(p.firstEl());
		this.secondEl.add(p.secondEl());
		return true;
	}
	
	public boolean simpleEquals(Object r) {
		if(r == null || !(r instanceof Relationship) ) return false;
		Relationship rObj = (Relationship)r;
		return this.firstEl.equals(rObj.firstEl) && this.secondEl.equals(rObj.secondEl);
	}
	
	@Override
	public boolean equals(Object r) {
		if(r == null || !(r instanceof Relationship) ) return false;
		Relationship rObj = (Relationship)r;
		for(Pair p: this.elements) {
			if(!rObj.elements.contains(p)) return false;
		}
		for(Pair p: rObj.elements) {
			if(!this.elements.contains(p)) return false;
		}
		return true;
	}
	
	void debugInfo() {
		System.out.println("First components massive:");
		for(Integer fi: this.firstEl)
			System.out.print(fi.toString() + ", ");
		System.out.println("\nSecond components massive:");
		for(Integer fi: this.secondEl)
			System.out.print(fi.toString() + ", ");
		System.out.println("");
	}
	
	@Override
	public String toString() {
		if(this.elements.size() == 0)
			return "[]";
		int randElementNum = (int)(this.elements.size() * Math.random());
		int index = 0;
		int randPairLength = 1;
		for(Pair p: this.elements) {
			if(index == randElementNum) {
				randPairLength = p.toString().length();
				break;
			}
			++index;
		}
		int lenOneElem = (randPairLength + 2); // len = count_of_digit + space + comma
		double extraSpaceKoef = 1.3;
		
		StringBuilder result = new StringBuilder(
			(int)(this.elements.size() * lenOneElem * extraSpaceKoef) + 2
		);
		result.append("[");
		for(Pair p: this.elements) {
			result.append(p.toString());
			result.append(", ");
		}
		result.setLength(result.length() - 2);
		result.append("]");
		return result.toString();
	}
	
	public Relationship multiply(Relationship r2) {
		Relationship resRel = new Relationship();
		for(Pair firstP: this.elements) {
			// find if we can produce multiply for this element of THIS relationship
			for(int index = 0; index < r2.firstEl.size(); index++) {
				if(firstP.secondEl().equals(r2.firstEl.get(index)))
					resRel.addElement(new Pair(firstP.firstEl(), r2.secondEl.get(index)));
			}
		}
		return resRel;
	}
	
	public Relationship transitClosure() {
		Relationship curRel = new Relationship();
		Relationship squareRel = new Relationship();
		int saveBarrier = 100, index = 0;
		boolean isFinished = false;
		
		for(Pair p: this.elements) curRel.addElement(p);
		
		while(index++ < saveBarrier && !isFinished) {
			squareRel = curRel.multiply(curRel);
			isFinished = true;
			for(Pair p: squareRel.elements)
				if(curRel.addElement(p) == true)
					isFinished = false;
		}
		if(index >= saveBarrier) System.out.println("ERROR when calculate transitClosure");
		return curRel;
	}
}

class Pair implements Comparable {
	private int x1;
	private int x2;
	
	public Pair() { this(1, 1); }
	public Pair(int x1, int x2) {
		this.x1 = x1; this.x2 = x2;
	}
	public Pair(Integer x1, Integer x2) {
		this.x1 = x1.intValue();
		this.x2 = x2.intValue();
	}
	
	@Override
	public String toString() {
		return String.format("(%s, %s)", Integer.toString(this.x1), Integer.toString(this.x2));
	}
	
	public boolean equals(Pair p) { 
		if(this == p) return true;
		return this.equals((Object)p); 
	}
	
	@Override
	public boolean equals(Object p) {
		if(!(p instanceof Pair)) return false;
		Pair pIncome = (Pair)p;
		return pIncome.x1 != this.x1 && pIncome.x2 != this.x2;
	}
	
	@Override
	public int hashCode() {
		return this.toString().hashCode();
	}
	
	public Integer firstEl() { return new Integer(this.x1); }
	public Integer secondEl() { return new Integer(this.x2); }
	
	@Override public int compareTo(Object p) {
		if(p == null || !(p instanceof Pair)) return 1;
		Pair pObj = (Pair)p;
		int result = this.x1 - pObj.x1;
		if(result != 0) return result;
		return this.x2 - pObj.x2;
	}
}

