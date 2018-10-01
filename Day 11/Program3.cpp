#include <stdio.h>

int main(void)
{
	int row, col;
	int table[2][3] = {{31,32,33},{34,35,36}};
	
	printf("Table is:");
	
	for(row=0 ; row<2 ; row++)
	{
		printf("\n");
		
		for(col=0 ; col<3 ; col++)
		{
			printf("%d\t", table[row][col]);
		}
	}
	
	return 0;
}



