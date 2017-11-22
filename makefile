#! /bin/bash

mdc: mdcaeuit.o mainmenu.o compression.o decompression.o creatMasterarray.o unique.o  codelen.o compression2.o compression3.o compression4.o compression5.o compression6.o compression7.o findIndex.o decompression2.o decompression3.o decompression4.o decompression5.o decompression6.o decompression7.o getma.o findChar.o charindex.o
	gcc -o mdc mainmenu.o compression.o decompression.o mdcaeuit.o creatMasterarray.o unique.o codelen.o compression2.o compression3.o compression4.o compression5.o compression6.o compression7.o findIndex.o getma.o decompression2.o decompression3.o decompression4.o decompression5.o decompression6.o decompression7.o findChar.o charindex.o
mdcaeuit.o: mdcaeuit.c header.h declaration.h 
	gcc -c mdcaeuit.c
codelen.o: codelen.c header.h declaration.h
	gcc -c codelen.c
findIndex.o: findIndex.c header.h declaration.h
	gcc -c findIndex.c 
charindex.o: charindex.c header.h declaration.h
	gcc -c charindex.c 
findChar.o: findChar.c header.h declaration.h
	gcc -c findChar.c 
compression2.o: compression2.c header.h declaration.h
	gcc -c compression2.c
compression3.o: compression3.c header.h declaration.h
	gcc -c compression3.c
compression4.o: compression4.c header.h declaration.h
	gcc -c compression4.c
compression5.o: compression5.c header.h declaration.h
	gcc -c compression5.c
compression6.o: compression6.c header.h declaration.h
	gcc -c compression6.c
compression7.o: compression7.c header.h declaration.h
	gcc -c compression7.c
unique.o: unique.c header.h declaration.h
	gcc -c unique.c
creatMasterarray.o: creatMasterarray.c header.h declaration.h
	gcc -c creatMasterarray.c
compression.o: compression.c header.h declaration.h
	gcc -c compression.c
decompression.o : decompression.c header.h declaration.h 
	gcc -c decompression.c
mainmenu.o : mainmenu.c header.h declaration.h 
	gcc -c mainmenu.c
getma.o: getma.c header.h declaration.h
	gcc -c getma.c
decompression2.o: decompression2.c header.h declaration.h
	gcc -c decompression2.c
decompression3.o: decompression3.c header.h declaration.h
	gcc -c decompression3.c
decompression4.o: decompression4.c header.h declaration.h
	gcc -c decompression4.c
decompression5.o: decompression5.c header.h declaration.h
	gcc -c decompression5.c
decompression6.o: decompression6.c header.h declaration.h
	gcc -c decompression6.c
decompression7.o: decompression7.c header.h declaration.h
	gcc -c decompression7.c
clean: 
	rm *.o
all:
	./mdc
