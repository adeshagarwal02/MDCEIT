#include "header.h"
#include "declaration.h"
int decompression4(int fd, char *ma)
{
	int dfd,i;
	unsigned char byt,c;
	printf("start: %s\n",__func__);
	dfd=open("Decompressedfile",O_WRONLY|O_CREAT);
	while(read(fd,&c,1))
	{
		byt^=byt;
		i=(int)(c>>4);
		byt=findChar(i,ma);
		write(dfd,&byt,1);
		c= c<<4;
		i=(int)(c>>4);
		byt=findChar(i,ma);
		write(dfd,&byt,1);		
	}
	close(dfd);
	printf("end: %s\n",__func__);
	return 0;
}
