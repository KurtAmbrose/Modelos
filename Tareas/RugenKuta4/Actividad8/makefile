default: rugeKutta.o funciones.o edo.o plot.o
	gcc rugeKutta.o funciones.o plot.o edo.o -lm -o rugeKutta.out 

rugeKutta.o: rugeKutta.c
	gcc -c rugeKutta.c

funciones.o: funciones.c
	gcc -c funciones.c

edo.o: edo.c
	gcc -c edo.c

plot.o: plot.c
	gcc -c plot.c

clean:
	rm -f *~
