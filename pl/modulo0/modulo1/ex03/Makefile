INCLUDES =  swap_numbers.h
SOURCES =  main.c swap_numbers.c
OBJFILES = main.o swap_numbers.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

swap_numbers.o: swap_numbers.c swap_numbers.h
main.o: main.c swap_numbers.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}