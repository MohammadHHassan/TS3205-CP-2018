#include <stdio.h>
#include <math.h>

int main(void)
{
	double xmin, xmax, fmin, fmax, xmid, fmid, p;
	int i;
	
	printf("This program finds the root of pow(x,3)+3x-5 using Bisection method.\n\n");
	
	printf("Please enter the value of xmin: ");
	scanf(" %lf", &xmin);
	printf("Please enter the value of xmax: ");
	scanf(" %lf", &xmax);
	
	for(i=1 ; i<=5 ; i++)
	{
		xmid = 0.5*(xmin+xmax);
		fmin = pow(xmin,3)+(3*xmin)-5;
		fmax = pow(xmax,3)+(3*xmax)-5;
		fmid = pow(xmid,3)+(3*xmid)-5;
		
		p = fmin*fmid;
		
		if (p<0)
		{
			xmax = xmid;
		}
		else
		{
			xmin = xmid;
		}
	}
	
	printf("\nRoot = %g", xmid);
	
	return 0;
}




