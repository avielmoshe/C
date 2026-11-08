CC = gcc
CFLAGS = -g -Wall

prog1: lab1.o main.o
	$(CC) lab1.o main.o -o prog1

lab1.o: lab1.c lab1.h
	$(CC) $(CFLAGS) -c lab1.c

main.o: main.c lab1.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o prog1
