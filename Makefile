
main: main.c assembler.c assembler.h
	gcc -o main main.c assembler.c


clean:
	rm -f main

