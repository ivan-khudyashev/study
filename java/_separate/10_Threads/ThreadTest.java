/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

public class ThreadTest implements LocalConstant
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
		// // Main Thread
		Thread mainThread = Thread.currentThread();
		mainThread.setPriority(BASE_TH_PRIORITY);
		// // New Thread
		Thread newThread = new Thread(new MyThread(), "TestThread");
		newThread.setPriority(HIGH_TH_PRIORITY);
		newThread.start();
		// // Another Thread
		AnotherThread anotherThread = new AnotherThread("SuperThread");
		anotherThread.start();
		for(int i = 0; i < TOTAL_LOOP_STEP; i++)
		{
			if(i%LOOP_STEP == 0)
				System.out.println("This is main Thread:" + mainThread.toString());
			if(i%CHECK_ALIVE_STEP == 0)
			{
				System.out.println("Thread " + newThread.getName() + " is " + newThread.isAlive());
				System.out.println("Thread " + anotherThread.getName() + " is " + anotherThread.isAlive());
			}
		}	
		
		// Finish
		try
		{
			newThread.join();
			anotherThread.join();
		}
		catch(InterruptedException e)
		{
			System.out.println("Main thread broken while awaiting other threads");
		}
		System.out.println(finishMessage);
		System.out.println();
		
	}
}

class MyThread implements Runnable, LocalConstant
{
	private Thread t = null;
	public void run()
	{
		this.t = Thread.currentThread();
		for(int i = 0; i < TOTAL_LOOP_STEP; i++)
			if(i%LOOP_STEP == 0)
				System.out.println("This is another Thread:" + this.t.toString());
	}
	public Thread getThread() { return this.t; }
}

class AnotherThread extends Thread implements LocalConstant
{
	public AnotherThread(String name)
	{
		super(name);
	}
	public void run()
	{
		Thread t = Thread.currentThread();
		for(int i = 0; i < TOTAL_LOOP_STEP; i++)
			if(i%LOOP_STEP == 0)
				System.out.println("This thread base extThread:" + t.toString());
	}
}

interface LocalConstant
{
	static final int LOOP_STEP = (int)3e4;
	static final int TOTAL_LOOP_STEP = (int)1e6;
	static final int CHECK_ALIVE_STEP = (int)5e5;
	static final int BASE_TH_PRIORITY = Thread.NORM_PRIORITY;
	static final int HIGH_TH_PRIORITY = Thread.MAX_PRIORITY;
}