#include <stdio.h>

int main(void)
{
	double x, sum, largeValues, mean;
	int k;
	
	sum=0;
	largeValues=0;
	
	for(k=1 ; k<=3 ; k++)
	{
		printf("Please enter a value: ");
		scanf(" %lf", &x);
		
		sum = sum+x;
		if(x>100)
		{
			largeValues++;
		}
	}
	
	mean = sum/3;
	printf("Mean = %g, Large Values = %g, Sum = %g", mean, largeValues, sum);
	
	return 0;
}




