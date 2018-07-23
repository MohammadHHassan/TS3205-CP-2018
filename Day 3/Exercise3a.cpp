#include <stdio.h>
#include <math.h>

int main(void)
{
	double u, v, s, a=0.5;
	
	printf("\nThis program calculates s with u and v given by the user");
	printf("\ns = (1.0/2.0)*(pow(v,2)-pow(u,2))/a");
	printf("\nGiven a = 0.5\n\n");
	
	printf("Please enter the value of u: ");
	scanf(" %lf", &u);
	
	printf("Please enter the value of v: ");
	scanf(" %lf", &v);
	
	s = (1.0/2.0)*(pow(v,2)-pow(u,2))/a;
	
	printf("\ns = %g", s);
	
	return 0;
}

