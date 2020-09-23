myProgram: main.o util.o
	gcc -std=c99 main.o -o myProgram.exe
main.o: main.c
	gcc -std=c99 -c main.c -o main.o
util.o: util.c
	gcc -std=c99 -c util.c -o util.o
clean:
	rm -f main.o util.o myProgram.exe
