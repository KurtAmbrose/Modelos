examen2.out: obj/plot.o obj/funciones.o obj/edo.o obj/examen2.o
	gcc -I inc obj/plot.o obj/funciones.o obj/edo.o obj/examen2.o -o examen2.out -lm

obj/plot.o: modulos/plot.c | obj #El pipe sirve para validar si la etiqueta 'obj' se cumple
	gcc -c modulos/plot.c -o obj/plot.o

obj/funciones.o: modulos/funciones.c | obj
	gcc -c modulos/funciones.c -o obj/funciones.o

obj/edo.o: modulos/edo.c | obj
	gcc -c modulos/edo.c -o obj/edo.o

obj/examen2.o: examen2.c #el -I sirve para indicarle al compilador donde están los .h
	gcc -c -I inc examen2.c -o obj/examen2.o

obj: #crea la carpeta de 'obj' en caso de que no exista
	mkdir obj

clean:
	rm *~ *.txt


