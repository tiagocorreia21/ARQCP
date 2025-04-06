INCLUDES =  sum_even.h
SOURCES =  main.c sum_even.c
OBJFILES = main.o sum_even.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

sum_even.o: sum_even.c sum_even.h
main.o: main.c sum_even.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}