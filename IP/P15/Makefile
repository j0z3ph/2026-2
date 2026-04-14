run1: facto.exe
	./facto.exe

run2: conta.exe
	./conta.exe

run3: arreglos.exe
	./arreglos.exe

run4: elmasgrande.exe
	./elmasgrande.exe

# programa 1
facto.exe: factorial.c biblioteca.o biblioteca.h
	gcc factorial.c biblioteca.o -o facto.exe

biblioteca.o: biblioteca.c biblioteca.h
	gcc -c biblioteca.c -o biblioteca.o

# programa 2
conta.exe: conta.c biblioteca.o biblioteca.h
	gcc conta.c biblioteca.o -o conta.exe

# programa 3
arreglos.exe: arreglos.c biblioteca.o biblioteca.h
	gcc arreglos.c biblioteca.o -o arreglos.exe

# programa 4
elmasgrande.exe: elmasgrande.c biblioteca.o biblioteca.h
	gcc elmasgrande.c biblioteca.o -o elmasgrande.exe