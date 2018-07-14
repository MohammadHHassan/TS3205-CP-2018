/*
Name: Mohammad Hj Hassan
Programme: Diploma in Telecommunications and Systems Engineering
Group Code: DiEng(TLC)...
ID: ...
Date: 29th May 2018
Title: Lab 1
Question: 15
Description: This program calculates the area of
a sphere by entering the radius of the sphere.
*/

// Start of program
#include <stdio.h>							// Library called for printf & scanf

int main(void)
{
	double v, r, pi;						// Declaration of variables: v=volume, r=radius & pi
	pi=3.14159265;							// Value of pi
	
	printf("Enter the value of radius: ");	// Prompt the user to enter the radius value
	scanf(" %lf", &r);						// Store the value entered in r
	
	v = (4.0/3.0)*pi*r*r;					// Formula of volume of sphere
	
	printf("r = %g\n", r);					// Display radius value
	printf("v = %g\n", v);					// Display the result (volume of the sphere)
	
	return 0;
}
// End of program


