#include <stdio.h>

int main(void)
{
	char name[100];
	
	printf("What is your name?\n");
	scanf(" %[^\n]s", &name);
	
	printf("Your name is %s", name);
	
	return 0;
}
