run1: contador.exe
	./contador.exe

run2: arreglo.exe
	./arreglo.exe

# programa 1
contador.exe: contador.c biblioteca.o biblioteca.h
	gcc contador.c biblioteca.o -o contador.exe

biblioteca.o: biblioteca.c biblioteca.h
	gcc -c biblioteca.c -o biblioteca.o

# programa 2
arreglo.exe: arreglo.c biblioteca.o biblioteca.h
	gcc arreglo.c biblioteca.o -o arreglo.exe
