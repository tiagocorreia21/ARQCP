INCLUDES = 	sum_digits.h
SOURCES = sum_digits.c main.c
OBJFILES = sum_digits.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

sum_digits: sum_digits.c sum_digits.h
main.o: main.c sum_digits.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
