.DEFAULT_GOAL := all

all: default clean

.PHONY: clean

default: principal.o funciones.o plot.o
	gcc principal.o funciones.o plot.o -lm -o graficar.out

principal.o: principal.c
	gcc -c principal.c

funciones.o: funciones.c
	gcc -c funciones.c

plot.o: plot.c
	gcc -c plot.c

clean:
	rm -f *.o *~ *#
