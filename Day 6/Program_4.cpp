#include <stdio.h>

int main(void)
{
	int j, k;
	
	for(j=1 ; j<=3 ; j++)
	{
		for(k=1 ; k<=3 ; k++)
		{
			printf("%d\t", j+k);
		}
		printf("\n");
	}
	
	return 0;
}

