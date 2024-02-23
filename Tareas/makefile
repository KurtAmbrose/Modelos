default: euler.o funciones.o edo.o plot.o
	gcc euler1.o funciones.o plot.o edo.o -lm -o euler1.out 

euler.o: euler1.c
	gcc -c euler1.c

funciones.o: funciones.c
	gcc -c funciones.c

edo.o: edo.c
	gcc -c edo.c

plot.o: plot.c
	gcc -c plot.c

clean:
	rm -f *~ *# *.txt