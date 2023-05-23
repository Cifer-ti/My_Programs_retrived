CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

format: format.o readline.o
	$(CC) -o format format.o readline.o $(CFLAGS)

format.o: format.c readline.h
	$(CC) -c format.c $(CFLAGS)

readline.O: readline.c readline.h
	$(cc) -c readline.c $(CFLAGS)