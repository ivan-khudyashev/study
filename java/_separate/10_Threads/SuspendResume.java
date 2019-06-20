/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

class NewThread implements Runnable {
	String name;
	Thread t;
	boolean suspendFlag;
	
	NewThread(String threadname) {
		name = threadname;
		t = new Thread(this, name);
		System.out.println("New thread: " + t);
		suspendFlag = false;
		t.start();
	}
	
	public void run() {
		try {
			for(int i = 15; i > 0; i--) {
				System.out.println(name + ": " + i);
				// Thread.sleep(200);
				synchronized(this) {
					while(suspendFlag) {
						wait();
					}
				}
			}
		}
		catch (InterruptedException e) {
			System.out.println(name + " interrupted.");
		}
		System.out.println(name + " finished.");
	}
	
	synchronized void mysuspend() {
		suspendFlag = true;
	}
	
	synchronized void myresume() {
		suspendFlag = false;
		notify();
	}
}

public class SuspendResume
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
		NewThread ob1 = new NewThread("First");
		NewThread ob2 = new NewThread("Second");
		
		try {
			//Thread.sleep(1000);
			ob1.mysuspend();
			System.out.println("Suspend thread First, it's state " + ob1.t.getState().toString());
			//Thread.sleep(1000);
			System.out.println("State of first thread before resume: " + ob1.t.getState().toString());
			ob1.myresume();
			System.out.println("Resume thread First, it's state " + ob1.t.getState().toString());
			ob2.mysuspend();
			System.out.println("Suspend thread Second");
			Thread.sleep(1000);
			ob2.myresume();
			System.out.println("Resume thread Second");
		}
		catch(InterruptedException e) {
			System.out.println("Main thread interrupted");
		}
		
		try {
			System.out.println("Awaiting finishing threads");
			ob1.t.join();
			ob2.t.join();
		}
		catch(InterruptedException e) {
			System.out.println("Main thread interrupted");
		}
		
		System.out.println("Main thread finished");
		
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}