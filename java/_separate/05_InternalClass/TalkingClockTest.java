/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.util.Date;
import javax.swing.Timer;

public class TalkingClockTest
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
		TalkingClock clock = new TalkingClock(1000, "hello");
		clock.start();
		for(long i = 0; i <2e9; i++);
		
		clock.stop();
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class TalkingClock
{
	private int interval;
	private String message;
	private Timer baseTimer = null;
	public TalkingClock(int interval, String message)
	{ this.interval = interval; this.message = message;}
	public void start()
	{
		ActionListener timePrinter = new TimePrinter();
		this.baseTimer = new Timer(interval, timePrinter);
		this.baseTimer.start();
	}
	public void stop()
	{
		if(this.baseTimer != null)
			this.baseTimer.stop();
	}
	
	private class TimePrinter implements ActionListener
	{
		public void actionPerformed(ActionEvent event)
		{
			Date now = new Date();
			System.out.println(now.toString() + ":" + TalkingClock.this.message);
		}
	}
}