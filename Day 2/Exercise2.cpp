#include <stdio.h>

int main(void)
{
	double C, F;
	
	printf("Please enter the value of Fahrenheit: ");
	scanf(" %lf", &F);
	
	C = (F-32.0)*5.0/9.0;
	
	printf("%g F = %g C", F, C);
	
	return 0;
}
