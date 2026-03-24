run: programa.exe
	./programa.exe

programa.exe: funciones.c biblioteca.h biblioteca.o
	gcc funciones.c biblioteca.o -o programa.exe



biblioteca.o: biblioteca.c
	gcc -c biblioteca.c -o biblioteca.o