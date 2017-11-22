#include"header.h"
#include"declaration.h"
int codelen(int cl)
{
	printf("Total number of unique words:%d\n",cl);
	if (cl < 4)
		return 2; 
	else if (cl < 8)
		return 3; 
	else if (cl <16)
		return 4; 
	else if (cl < 32)
		return 5; 
	else if (cl<64)
		return 6; 
	else if (cl<128)
		return 7;
}
