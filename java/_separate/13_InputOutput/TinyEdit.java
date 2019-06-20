/**
 * Copyright (C) Khudyashev Ivan, 2017
 * @version 1.0 2017.03.30
 * @author Khudyashev Ivan, bahek1983@gmail.com
*/

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.io.FileWriter;

public class TinyEdit
{
	private static String fileName = "tinyEditorFile.txt";
	public static void main(String[] args) throws IOException
	{
		// Init Variables
		String greetingString = "Copyright (C) Khudyashev Ivan, 2017";
		String programInfo = "";
		String finishMessage = "Done!";
		System.out.println(greetingString);
		System.out.println(programInfo);
		
		// Actions!
		BufferedReader br = new BufferedReader(
			new InputStreamReader(System.in)
		);
		
		try(FileWriter saveFile = new FileWriter(TinyEdit.fileName)) {
			String str[] = new String[50];
			System.out.println("Input text");
			System.out.println("Enter 'stop' for exit");
			
			for(int i = 0; i < 50; i++) {
				try {
					str[i] = br.readLine();
				}
				catch(IOException e) {
					System.out.println("Error while read input from console");
					//saveFile.close();
					return ;
				}
				if(str[i].equals("stop")) break;
			}
			
			System.out.println("\n\nContent of inputed text file.");
			for(String nextStr: str)
				if(nextStr.equals("stop"))
					break;
				else
					try {
						//System.out.println(nextStr);
						saveFile.write(nextStr + "\r\n");
					}
					catch(IOException e) {
						System.out.println("Error when writing in output file");
						System.out.println(e);
						//saveFile.close();
						return ;
					}
		}
		// Finish
		System.out.println(finishMessage);
		System.out.println();
		
	}
}