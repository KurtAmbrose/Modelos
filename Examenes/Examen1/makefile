.DEFAULT_GOAL := all

all: default clean

.PHONY: clean

default: main.o funciones.o plot.o
	gcc main.o funciones.o plot.o -lm -o graficar.out

main.o: main.c
	gcc -c main.c

funciones.o: funciones.c
	gcc -c funciones.c

plot.o: plot.c
	gcc -c plot.c

clean:
	rm -f *.o *~ *#
