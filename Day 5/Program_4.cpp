#include <stdio.h>

int main(void)
{
	double age;
	printf("Please enter your age: ");
	scanf(" %lf", &age);
	
	if(age>0.0 && age<120.0)
	{
		printf("Age is valid.");
		if(age<18.0)
		{
			printf("\nUnder voting age.");
			if(age<5.0)
			{
				printf("\nUnder school age.");
			}
		}
	}
	else
		printf("Age is not valid.");
	
	printf("\n...Bye!...");
	
	return 0;
}





