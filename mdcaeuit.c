#include "header.h"
#include "declaration.h"
int main()
{
	int choice;
	while(1)
	{
		choice=mainmenu();
		switch(choice)
		{
		case 1:
		compression();
		break;
		case 2:
		decompression();
		break;
		case 0:
		exit(EXIT_FAILURE);
		break;
		default :
		printf("Invalid input");
		}
	}
	return 0;
}
