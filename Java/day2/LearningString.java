package day2;

import java.util.Scanner;

public class LearningString
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		
		String a = "Password123";
		
		while(true)
		{
			System.out.println("Please enter your password: ");
			String b = scanner.nextLine();
			
			boolean c = a.equals(b);
			if(c == false)
			{
				System.out.println("Incorrect Password. Please Try Again");
			}
			else
			{
				System.out.println("You are logged in");
				break;
			}
		}
	}
}
