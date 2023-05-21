CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

brace: brace.o stackADT.o
	$(CC) -o brace brace.o stackADT.o $(CFLAGS)

stackADT.o: stackADT.c stackADT.h
	$(CC) -c stackADT.c $(CFLAGS)

brace.o: brace.c stackADT.h
	$(CC) -c brace.c $(CFLAGS)