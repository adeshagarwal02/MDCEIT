#include"header.h"
#include"declaration.h"
int compression3(int fd, char *ma)
{
	int cfd,i;
        unsigned char byt,c,ch;
        cfd=open("Compressedfile",O_WRONLY|O_CREAT);
        if(cfd==-1)
        {
                perror("Error:");
                exit(EXIT_FAILURE);
        }
        printf("Start:compression3\n");
        while(read(fd,&ch,1))
        {
                byt^=byt;
	       	c=charindex(ch,ma);
                c=c<<5;
                byt|=c;
                if(ch=='\0')
                break;
                read(fd,&ch,1);
	        c=charindex(ch,ma);
	        c=c<<5;
                c=c>>3;
                byt|=c;
                if(ch == '\0')
                break;
                read(fd,&ch,1);
  		c=charindex(ch,ma);
                c=c<<5;
                c=c>>6;
                byt|=c;
                write(cfd,&byt,1);
		byt^=byt;
		c=charindex(ch,ma);
		c=c<<7;
		byt|=c;
                if(ch == '\0')
                break;
		read(fd,&ch,1);
		c=charindex(ch,ma);
		c=c<<5;
		c=c>>1;
		byt|=c;
                if(ch == '\0')
                break;
		read(fd,&ch,1);
		c=charindex(ch,ma);
		c=c<<5;
		c=c>>4;
		byt|=c;
                if(ch == '\0')
                break;
		read(fd,&ch,1);
		c=charindex(ch,ma);
		c=c<<5;
		c=c>>7;
		byt|=c;
		write(cfd,&byt,1);
		byt^=byt;
		c=charindex(ch,ma);
		c=c<<6;
		byt|=c;
                if(ch == '\0')
                break;
		read(fd,&ch,1);
		c=charindex(ch,ma);
		c=c<<5;
		c=c>>2;
		byt|=c;
                if(ch == '\0')
                break;
		read(fd,&ch,1);
		c=charindex(ch,ma);
		c=c<<5;
		c=c>>5;
		byt|=c;
		write(cfd,&byt,1);	
                if(ch == '\0')
                break;
        }
        printf("END:compression3\n");
        close(cfd);
	return 0;
}
