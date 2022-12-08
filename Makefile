all: main.c my_mat.c my_mat.h connection
	gcc -c main.c my_mat.c 

connection: main.o my_mat.o
	gcc main.o my_mat.o -o connection


my_mat.o :my_mat.c my_mat.h
	gcc -Wall -c my_mat.c my_mat.h

main.o :main.c my_mat.h
	gcc -Wall -c main.c my_mat.h my_mat.c

clean:
	rm -f *.o *.gch connection