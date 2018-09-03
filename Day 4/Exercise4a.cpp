#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y;
	
	printf("Please enter a positive number: ");
	scanf(" %lf", &x);
	
	if(x>0)
	{
		y = sqrt(x);
		printf("Square root of %g is equal to %g", x, y);
	}
	
	printf("\nThank You.");
	
	return 0;
}




