#include <stdio.h>

int main(void)
{
	double x;
	
	do
	{
		printf("Please enter a positive number: ");
		scanf(" %lf", &x);
	} while(x<=0.0);
	
	printf("\nThank You.");
	
	return 0;
}




