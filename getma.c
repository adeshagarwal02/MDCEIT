#include "header.h"
#include "declaration.h"
char *getma(int eke)
{
	char *ma,ch;
	int i=0;
	ma=NULL;
	while(read(eke,&ch,1))
	{
		ma = realloc(ma,i+1);
		*(ma+i)=ch;
		i++;
	}
	return ma;
}

