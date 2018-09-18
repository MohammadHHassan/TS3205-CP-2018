#include <stdio.h>
#include <math.h>

double hypo(double b, double c);

int main(void)
{
	double d, e, f;
	printf("Please enter the value of b: ");
	scanf(" %lf", &d);
	printf("Please enter the value of c: ");
	scanf(" %lf", &e);
	f = hypo(d, e);
	
	printf("Hypotenuse = %.1f", f);
	
	return 0;
}

double hypo(double b, double c)
{
	double a;
	a = sqrt(pow(b,2)+pow(c,2));
	return a;
}




