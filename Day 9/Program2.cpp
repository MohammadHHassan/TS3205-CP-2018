#include <stdio.h>

void stars2(int n);

int main(void)
{
	int k=7;
	stars2(k);
	stars2(2*k);
	
	return 0;
}

void stars2(int n)
{
	int j;
	for(j=1 ; j<=n ; j++)
	{
		printf("*");
	}
	printf("\n");
}




