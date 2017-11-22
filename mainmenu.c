#include"header.h"
#include"declaration.h"
int mainmenu()
{
	int choice;
	printf("\n\t________Main menu_________\n");
	printf("\t1._______Compression______\n");
	printf("\t2.______Decompression_____\n");
	printf("\t0.__________exit__________\n");
	scanf("%d",&choice);
	return choice;
}
