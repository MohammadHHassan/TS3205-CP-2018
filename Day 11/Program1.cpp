#include <stdio.h>

int main(void)
{
	double a=2.0, u[3], s[3];
	int i;
	
	u[0] = 1.0;
	u[1] = 2.0;
	u[2] = 3.0;
	
	printf("u = (%.1f, %.1f, %.1f)\n", u[0], u[1], u[2]);
	
	for(i=0 ; i<=2 ; i++)
	{
		s[i] = u[i]*a;
	}
	
	printf("s = (%.1f, %.1f, %.1f)\n\n", s[0], s[1], s[2]);
	
	for(i=-2 ; i<=8 ; i++)
	{
		printf("s[%d] = %.1f\n", i, s[i]);
	}
	
	return 0;
}





