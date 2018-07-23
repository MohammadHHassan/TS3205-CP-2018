#include <stdio.h>

int main(void)
{
	// Mixing ints and doubles 
	printf("\n9.0/5 =  %g", 9.0/5); 
	printf("\n9/5.0 =  %g", 9/5.0); 
	printf("\n9/5*10.0 = %g", 9/5*10.0); 
	printf("\n10.0*9/5 = %g", 10.0*9/5);
	
	// Casts
	printf("\n(int)6.9   =   %d",   (int)6.9); 
	printf("\n(double)9/5 = %g", (double)9/5); 
	printf("\n(double)(9/5)  =  %g",  (double)(9/5)); 
	printf("\nF is ASCII character %d", (int) 'F');
	printf("\nASCII character 71 is %c", (char)71); 
	printf("\n\\n is ASCII  char.  %d",  (int) '\n');
	
	return 0;
}

