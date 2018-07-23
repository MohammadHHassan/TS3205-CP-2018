#include <stdio.h>

int main(void)
{
	int j = 6;
	double x = 3e-1;
	
	printf("Given:");
	printf("\n\tint j = 6");
	printf("\n\tdouble x = 3e-1\n");
	
	printf("\n(1)  j = j*3+1 = %d", (j*3+1));
	printf("\n(2)  j = j-4 = %d", (j-4));
	printf("\n(3)  j = j+1 = %d", (j+1));
	printf("\n(4)  j = j-1 = %d", (j-1));
	printf("\n(5)  j = j/2 = %d", (j/2));
	printf("\n(6)  j = j%%2 = %d", (j%2));
	printf("\n(7)  j = x = %g", (x));
	printf("\n(8)  x = j/2 = %d", (j/2));
	printf("\n(9)  x = j/2.0 = %g", (j/2.0));
	printf("\n(10) j = j/x+1e-9 = %g", (j/x+1e-9));
	printf("\n(11) j = 38%%j+3 = %d", (38%j+3));
	printf("\n(12) x = j*x = %g", (j*x));
	
	return 0;
}

