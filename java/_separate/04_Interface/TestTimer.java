/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.Timer;

public class TestTimer
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
		SomeMessage timerMessage = new SomeMessage();
		ActionListener myActionOnTimer = timerMessage;
		Timer t = new Timer(3000, myActionOnTimer);
		t.start();
		int maxStep = 2;
		while(true)
		{
			System.out.printf("\n%b\n", timerMessage.isStop(maxStep));
			if(timerMessage.isStop(maxStep) == true)
			{
				t.stop();
				System.out.println("STOP!!!");
				break;
			}
		}
		
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class SomeMessage implements ActionListener
{
	private int counter = 0;
	public SomeMessage(){}
	public void actionPerformed(ActionEvent event)
	{
		System.out.println("class SomeMessage: print string");
		System.out.printf("\nDebug: this.counter = %d; 2<=this.counter = %b\n", this.counter, 2<=this.counter);
		this.counter++;
	}
	public boolean isStop(int maxStep)
	{
		return maxStep<=counter;
	}
}