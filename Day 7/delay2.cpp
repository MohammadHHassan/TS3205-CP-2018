#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	for(i=10 ; i>=0; i--)
	{
		system("cls");
		printf("This program will terminate in %d second(s)", i);
		Sleep(1000);
	}
	
	return 0;
}



