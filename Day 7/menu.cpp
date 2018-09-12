#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
	char c;
	double a, b;
	a=0.0;
	b=0.0;
	
	do
	{
		system("cls");		//Clear the screen
		printf("==================\n");
		printf("Current values: \n");
		printf("a = %.2f,\tb = %.2f,\ta+b = %.2f\n", a, b, a+b);
		printf("\nYour menu:\n");
		printf("a) Enter a new value for a\n");
		printf("b) Enter a new value for b\n");
		printf("q) Quit\n");
		scanf(" %c", &c);
		
		switch(c)
		{
			case 'A':
			case 'a': printf("Enter value for a: ");
					  scanf(" %lf", &a);
					  break;
			case 'B':
			case 'b': printf("Enter value for b: ");
					  scanf(" %lf", &b);
					  break;
			case 'Q':
			case 'q': printf("This program will terminate. Thank you.");
					  break;
			default:  printf("Invalid key.\n");
					  Sleep(5000);
					  break;
		}
	} while(c!='q' && c!='Q');
	
	return 0;
}




