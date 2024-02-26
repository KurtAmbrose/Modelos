default: main.o edo.o funciones.o
	gcc main.o edo.o funciones.o -lm -o main.out

main.o: main.c
	gcc -c main.c

edo.o: edo.c
	gcc -c edo.c

funciones.o: funciones.c
	gcc -c funciones.c

clean:
	rm *~ *.txt *#