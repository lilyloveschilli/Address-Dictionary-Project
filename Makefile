# Fill this makefile with the makefile format instructions to 
#   build your program.
dict1: main.o dict.o list.o csv.o bit.o address.o
	gcc -Wall -g -o dict1 main.o dict.o list.o csv.o bit.o address.o

main.o: main.c
	gcc -g -c main.c

dict.o: dict.c dict.h
	gcc -g -c dict.c

list.o: list.c list.h
	gcc -g -c list.c

csv.o: csv.c csv.h
	gcc -g -c csv.c

bit.o: bit.c bit.h
	gcc -g -c bit.c

address.o: address.c address.h
	gcc -g -c address.c

clean:
	rm -f *.o dict1