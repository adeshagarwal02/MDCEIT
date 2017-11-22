#include"header.h"
#include"declaration.h"
int compression4(int fd, char *ma)
{
	int cfd,i;
	unsigned char byt,c,ch;
	cfd=open("Compressedfile",O_WRONLY|O_CREAT);
	if(cfd==-1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);	
	}
	printf("Start:compression4\n");
	while(read(fd,&ch,1))
	{
		byt^=byt;
/*		read(fd,&ch,1);
		if(ch==10)
		break;
*/		i= findIndex(ch,ma);
		c=(char)i;
		c=c<<4;
		byt|=c;
		read(fd,&ch,1);
/*		if(ch==10)
		break;
*/		i= findIndex(ch,ma);
		c=(char)i;
		c=c<<4;
		c=c>>4;
		byt|=c;
		write(cfd,&byt,1);
	}	
	printf("END:compression4\n");
	close(cfd);
	return 0;
}
