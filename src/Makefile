CC = gcc
CFLAGS = 
LIB =

all: main
strcopy:
	$(CC) $(CFLAGS) -c strcopy.c
main:strcopy
	$(CC) $(CFLAGS) strcopy.o main.c -o main
run:
	./main
clean:
	rm main