INCLUDES = 	integer_part.h fractional_part.h
SOURCES = integer_part.c fractional_part.c main.c
OBJFILES = integer_part.o fractional_part.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

integer_part.o: integer_part.c integer_part.h
fractional_part.o: fractional_part.c fractional_part.h
main.o: main.c integer_part.h fractional_part.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
