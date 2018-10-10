package day2;

import java.util.Scanner;

public class LearningScanner2
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Please enter your first name: ");
		String firstName = scanner.nextLine();
		System.out.println("Your first name is " + firstName);
		
		System.out.println("Please enter your last name: ");
		String lastName = scanner.nextLine();
		System.out.println("Your last name is " + lastName);
		
		System.out.println();
		System.out.println("Your full name is " + firstName + " " + lastName);
		
		System.out.println("Please enter an integer: ");
		int a = scanner.nextInt();
		System.out.println("a = " + a);
		
		System.out.println("Please enter a double: ");
		double b = scanner.nextDouble();
		System.out.println("b = " + b);

		
		System.out.println("Please enter an integer: ");
		try
		{
			int c = scanner.nextInt();
			System.out.println("c = " + c);
		} catch (Exception e)
		{
			System.out.println("Wrong Input");
		}
		
		scanner.close();
	}
}