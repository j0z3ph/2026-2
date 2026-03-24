run: funciones.exe
	./funciones.exe

funciones.exe: funciones.c biblioteca1tv2.o biblioteca1tv2.h
	gcc funciones.c biblioteca1tv2.o -o funciones.exe

biblioteca1tv2.o: biblioteca1tv2.c
	gcc -c biblioteca1tv2.c -o biblioteca1tv2.o