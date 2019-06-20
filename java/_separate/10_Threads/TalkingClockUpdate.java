/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.util.Date;
import javax.swing.Timer;

public class TalkingClockUpdate
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
		// TalkingClock clock = new TalkingClock(1000, "hello");
		MySender clock = new MySender(1000, "hello");
		Thread newThread = new Thread(new NewThread(clock), "TimerThread");
		newThread.start();
		for(long i = 0; i <2e9; i++);
		
		clock.stop();
		
		try
		{
			newThread.join();
		}
		catch(InterruptedException e)
		{
			System.out.println("Main Thread interrupted");
		}
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}
class MySender
{
	private int interval;
	private String message;
	private boolean isContinue = true;
	private ActionListener[] lstnrs;
	
	public MySender(int interval, String message) 
	{ 
		this.interval = interval; 
		this.message = message; 
		this.lstnrs = new ActionListener[2];
	}
	
	public void init()
	{
		this.lstnrs[0] = new MyListener();
	}
	
	public void action()
	{
		while(this.isContinue)
		{
			try
			{
				Thread.sleep(interval);
			}
			catch(InterruptedException e)
			{
				System.out.println("Unexpected interrupted MySender.action()");
			}
			for(ActionListener nextLstnr: this.lstnrs)
				if(nextLstnr != null)
					nextLstnr.actionPerformed(null);
		}
	}
	
	public void stop()
	{
		this.isContinue = false;
	}

	private class MyListener implements ActionListener
	{
		public void actionPerformed(ActionEvent event)
		{
			Date now = new Date();
			System.out.println(now.toString() + ":" + MySender.this.message);
		}
	}	
}

class NewThread implements Runnable
{
	MySender timer;
	public NewThread(MySender timer) { this.timer = timer; }
	public void run()
	{
		timer.init();
		timer.action();
	}
}