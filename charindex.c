#include"header.h"
#include"declaration.h"
unsigned char charindex(unsigned char ch, char *ma)
{
	char c;
	int i; 
	i= findIndex(ch,ma);
	c=(char)i;
	return c;
}
