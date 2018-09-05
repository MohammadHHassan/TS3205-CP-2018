#include <stdio.h>

int main(void)
{
	char c;
	printf("Enter the letter A or B: ");
	scanf(" %c", &c);
	
	switch(c)
	{
		case 'a': printf("You typed an 'a'");
				  break;
		case 'A': printf("You typed an 'A'");
				  break;
		case 'b':
		case 'B': printf("You typed 'b' or 'B'");
				  break;
		default:  printf("You didn't type a, A, b or B");
	}
	printf("\n...Exiting...");
	
	return 0;
}





