INCLUDES =  sum_odd.h
SOURCES =  main.c sum_odd.c
OBJFILES = main.o sum_odd.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

sum_odd.o: sum_odd.c sum_odd.h
main.o: main.c sum_odd.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}