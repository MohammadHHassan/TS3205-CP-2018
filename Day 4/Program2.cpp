#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");
	scanf(" %d", &x);
	
	if(x<0)
	{
		printf("Negative number has been entered.");
		printf("\nChanging sign...\n");
		x = -x;
	}
	
	printf("Positive number entered is %d", x);
	
	return 0;
}



