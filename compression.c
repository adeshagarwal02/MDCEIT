#include"header.h"
#include"declaration.h"
int compression()
{     
	char *ma;
	int fd,cl,ekey;
	printf("Start:compression\n");	        
	fd=open("myfile",O_RDONLY);
	if(fd==-1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);	
	}
	ma=creatMasterarray(fd);
	printf("%s",ma);
	cl= codelen(strlen(ma));
	lseek(fd,0,SEEK_SET);
	switch (cl)
	{	
	case 2:
		compression2(fd,ma);
		break;
	case 3:
		compression3(fd,ma);
		break;
	case 4:
		compression4(fd,ma);
		break;
	case 5:
		compression5(fd,ma);
		break;
	case 6:
		compression5(fd,ma);
		break;
	case 7:
		compression5(fd,ma);
		break;	
	}
	ekey=open("encrkey",O_WRONLY|O_CREAT);
	if(ekey==-1)
	{
		perror("Error:");
		exit(EXIT_FAILURE);	
	}
	write(ekey,ma,strlen(ma));
	close(ekey);
	close(fd);	
	printf("end:compression\n");
	return 0;
}
