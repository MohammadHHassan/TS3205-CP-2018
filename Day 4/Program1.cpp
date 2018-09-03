#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Please enter a positive number: ");
	scanf(" %d", &x);
	
	if(x<0)
	{
		printf("ERROR! A negative number has been entered");
	}
	
	printf("\nNumber entered = %d", x);
	
	return 0;
}



