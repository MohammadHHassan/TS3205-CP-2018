#include <stdio.h>		// Library for printf

int main(void)			// Starting/main program
{
	double a, b, c, d;	// Declaration of variables
	
	a = 32.5;
	b = 1.23;
	c = 0.5;
	d = a+b*c;			// Calculation to find d
	
	printf("%.1f + %.1f * %.1f = %.1f", a, b, c, d);	// Print out the result
	
	return 0;
}




