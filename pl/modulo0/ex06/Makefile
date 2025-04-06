INCLUDES = 	get_greater_digit.h
SOURCES = get_greater_digit.c main.c
OBJFILES = get_greater_digit.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

get_greater_digit: get_greater_digit.c get_greater_digit.h
main.o: main.c get_greater_digit.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
