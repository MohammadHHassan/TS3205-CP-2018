#include <stdio.h>

void vscale(double u[], double s, int n);

int main(void)
{
	double v[3] = {1.0, 2.0, 3.0};
	
	printf("v = [%g, %g, %g]", v[0], v[1], v[2]);
	
	vscale(v, 4, 3);
	printf("\nv = [%g, %g, %g]", v[0], v[1], v[2]);
	
	return 0;
}

void vscale(double u[], double s, int n)
{
	int j;
	
	for(j=0 ; j<n ; j++)
	{
		u[j] *= s;
	}
}



