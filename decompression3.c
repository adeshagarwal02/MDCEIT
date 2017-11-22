#include "header.h"
#include "declaration.h"
int decompression3(int fd, char *ma)
{
	int dfd,i;
        unsigned char byt,c;
        printf("start: %s\n",__func__);
        dfd=open("Decompressedfile",O_WRONLY|O_CREAT);
        while(read(fd,&c,1))
        {
                byt^=byt;
                i=(int)(c>>5);
                byt=findChar(i,ma);
		if(byt== '\0')
			break;
		write(dfd,&byt,1);
                c=c<<3;
                i=(int)(c>>5);
                byt=findChar(i,ma);
		if(byt== '\0')
			break;
                write(dfd,&byt,1);
		c=c<<3;
		i=(int)(c>>5);
		read(fd,&c,1);
		i|=(int)(c>>7);
                byt=findChar(i,ma);
		if(byt== '\0')
			break;
                write(dfd,&byt,1);
		c=c<<1;
		i=(int)(c>>5);
		byt=findChar(i,ma);
		if(byt== '\0')
			break;
                write(dfd,&byt,1);
		c=c<<3;
		i=(int)(c>>5);
                byt=findChar(i,ma);
		if(byt== '\0')
			break;
                write(dfd,&byt,1);
		c=c<<3;
		i=(int)(c>>5);
		read(fd,&c,1);
		i|=(int)(c>>6);
		byt=findChar(i,ma);
		if(byt== '\0')
			break;
                write(dfd,&byt,1);
		c=c<<2;
		i=(int)(c>>5);
		byt=findChar(i,ma);
		if(byt== '\0')
			break;
                write(dfd,&byt,1);
		c=c<<3;
		i=(int)(c>>5);
		byt=findChar(i,ma);
		if(byt== '\0')
			break;
                write(dfd,&byt,1);
        }
        close(dfd);
        printf("end: %s\n",__func__);
        return 0;

}
