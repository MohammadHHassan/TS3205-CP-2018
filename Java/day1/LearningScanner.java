package day1;

import java.util.Scanner;

public class LearningScanner
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Please enter your name: ");
		String name = scanner.nextLine();
		System.out.println("Your name is " + name);
	}
}




