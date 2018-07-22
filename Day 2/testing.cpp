#include <stdio.h>

int main(void)
{
	char name[100];
	printf("Enter your name: ");
	scanf(" %[^\n]s", &name);
	
	printf("Your name is %s", name);
}
