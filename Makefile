CC=clang
CFLAGS=-I.
FILE=first

comp:
	$(CC) -o ./bin/$(FILE) ./src/$(FILE).c