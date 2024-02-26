default: main.o funciones.o edo.o
	gcc main.o funciones.o edo.o -lm -o main.out 

main.o: main.c
	gcc -c main.c

funciones.o: funciones.c
	gcc -c funciones.c

edo.o: edo.c
	gcc -c edo.c

clean:
	rm -f *~ *# *.txt