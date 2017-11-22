#include"header.h"
#include"declaration.h"
int decompression()
{
	int cfd,eke,cl;
	char *ma;
	eke = open("encrkey",O_RDONLY);
	if(eke==-1)
	{
		perror("OPEN:");
		exit(EXIT_FAILURE);
	}
	printf("Star:%s\n",__func__);
	ma=getma(eke);
	cl=codelen(strlen(ma));
	close(eke);
	cfd = open("Compressedfile",O_RDONLY);	
	switch (cl)
	{
		case 2:
			decompression2(cfd,ma);
			break;
		case 3:
			decompression3(cfd,ma);
			break;
		case 4:
			decompression4(cfd,ma);
			break;
		case 5:
			decompression5(cfd,ma);
			break;
		case 6:
			decompression6(cfd,ma);
			break;
		case 7:
			decompression7(cfd,ma);
			break;

	}
	close(cfd);
	printf("END:%s\n",__func__);
	return 0;
}
