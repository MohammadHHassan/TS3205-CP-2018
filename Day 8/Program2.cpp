#include <stdio.h>

int length;
void stars1();

int main(void)
{
	int k = 7;
	length = k;
	stars1();
	length = 2*k;
	stars1();
	
	return 0;
}

void stars1()
{
	int j;
	for(j=1 ; j<=length ; j++)
	{
		printf("*");
	}
	printf("\n");
}
