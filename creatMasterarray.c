#include"header.h"
#include"declaration.h"
char *creatMasterarray(int fd)
{
	char ch;
	int i;
	char *ma;
	printf("Creation Begain:\n");
	i=0;
	ma=NULL;
	while(read(fd,&ch,1))
	{

		 ma=realloc(ma,i+1);
		 if(unique(ch,ma))
		{
			
			*(ma+i) = ch;
			i++;	
		}
	}
	*(ma+i)='\0';
	printf("END:Creation\n");
	return ma;
	
}
