#include <stdio.h>

void yourName(int n);

int main(void)
{
	int a;
	printf("How many times do you want your name to be printed? ");
	scanf(" %d", &a);
	yourName(a);
	
	return 0;
}

void yourName(int n)
{
	int j;
	for(j=1 ; j<=n ; j++)
	{
		printf("Mohammad ");
	}
	printf("\n");
}







