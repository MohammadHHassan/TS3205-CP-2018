#include <stdio.h>

int factorial(int k);

int main(void)
{
	int n;
	printf("Please enter the value of n: ");
	scanf(" %d", &n);
	printf("%d! = %d", n, factorial(n));
	
	return 0;
}

int factorial(int k)
{
	if(k==1)
	{
		return 1;
	}
	else
	{
		return k*factorial(k-1);
	}
}








