#include <stdio.h>

int main(void)
{
	char status;
	printf("Enter marital status (M,S,D,W): ");
	scanf(" %c", &status);
	
	if(status=='m' || status=='M')
		printf("Married");
	else if (status=='s' || status=='S')
		printf("Single");
	else if (status=='d' || status=='D')
		printf("Divorced");
	else if (status=='w' || status=='W')
		printf("Widowed");
	else
	{
		printf("Invalid code entered.");
		printf("\nValid codes are: M S D W");
	}
	
	printf("\n...Bye!...");
	
	return 0;
}




