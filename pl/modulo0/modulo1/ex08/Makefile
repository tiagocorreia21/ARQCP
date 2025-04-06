INCLUDES =  sum_integer_bytes.h
SOURCES =  main.c sum_integer_bytes.c
OBJFILES = main.o sum_integer_bytes.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

sum_integer_bytes.o: sum_integer_bytes.c sum_integer_bytes.h
main.o: main.c sum_integer_bytes.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}