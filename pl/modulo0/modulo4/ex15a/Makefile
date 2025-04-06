main: main.o func.o
	gcc main.o func.o -z noexecstack -o main

main.o: main.c func.h
	gcc -g -Wall -Wextra -fanalyzer -c main.c -o main.o

func.o: func.c
	gcc -g -Wall -Wextra -fanalyzer -c func.c -o func.o

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
