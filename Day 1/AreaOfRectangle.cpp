#include <stdio.h>

int main(void)
{
	double area, length, width;
	
	length = 2.5;
	width = 1.2;
	
	area = length*width;
	
	printf("This program calculates the area of rectangle\n");
	printf("Length = %.1f, Width = %.1f", length, width);
	printf("\nArea = %5.1f", area);
	
	return 0;
}






