CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

report: report.o readline.o
	$(CC) -o report report.o readline.o $(CFLAGS)

report.o: report.c readline.h
	$(CC) -c report.c $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)