#include"header.h"
#include"declaration.h"
int findIndex(unsigned char ch, char *ma)
{
	int i;
	for(i=0;i<strlen(ma);i++)
	{
		if(ch==*(ma+i))
		{
			return i;
		}
	}		
	return -1;
}
