#include <stdio.h>

int main(void)
{
	// Integer arithmetic 
	printf("\n9/5  =  %d",  9/5); 
	printf("\n9%%5 = %d", 9%5);
	
	// Bitwise  operations
	printf("\n5&6  =  %d",  (5&6));
	printf("\n5|6  =  %d",  (5|6)); 
	printf("\n7<<1 = %d", (7<<1)); 
	printf("\n7>>1 = %d", (7>>1));
	// Operator precedence
	
	printf("\n2+103/4%%7 = %d", 2+103/4%7); 
	
	return 0;
}

