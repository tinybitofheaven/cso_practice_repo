myProgram: main.o
	gcc main.o -o myProgram
main.o: main.c
	gcc -c main.c -o main.o
clean:
	rm -f main.o util.o myProgram
