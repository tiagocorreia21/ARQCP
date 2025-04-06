main: main.o sum.o sub.o
	gcc main.o sum.o sub.o -z noexecstack -o main

main.o: main.c asm.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

sum.o: sum.s
	as -g -o sum.o sum.s

sub.o: sub.s
	as -g -o sub.o sub.s

run: main
	./main

clean:
	rm *.o main

vg: main
	valgrind ./main

debug: main
	gdb -tui main

ddd: main
	ddd main &
