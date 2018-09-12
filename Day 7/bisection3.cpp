#include <stdio.h>
#include <math.h>

int main(void)
{
	double xmin, xmax, fmin, fmax, xmid, fmid, p;
	int i=1;
	
	printf("This program finds the root of pow(x,3)+3x-5 using Bisection method.\n\n");
	
	printf("Please enter the value of xmin: ");
	scanf(" %lf", &xmin);
	printf("Please enter the value of xmax: ");
	scanf(" %lf", &xmax);
	
	do
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
		i++;
	} while((xmax-xmin)>1e-5);
	
	printf("\nRoot = %g", xmid);
	printf("\nNumber of iteration = %d", i);
	
	return 0;
}




