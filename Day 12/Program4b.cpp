#include <stdio.h>

int main(void)
{
	char greet[20] = {'H', 'e', 'l', 'l', 'o', '\0', 'x'};
	char query[30] = {"\nWhat is your name?\n"};
	char farewell[] = "\nGoodbye";
	char name[20];
	
	printf("%s", greet);
	printf("%s", query);
	scanf(" %19s", &name);
	printf("\nYour first initial is %c", name[0]);
	printf("%s %s", farewell, name);
	
	return 0;
}
