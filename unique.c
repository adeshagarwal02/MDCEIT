#include"header.h"
#include"declaration.h"
int unique(char ch , char *ma)
{
	int j;
	for(j=0;j<strlen(ma);j++)
	{	
		if (ch ==*(ma+j))
		{
			return 0;
		}
		 
	}
	return 1;
	
}
