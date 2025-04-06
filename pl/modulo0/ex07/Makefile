INCLUDES = 	get_ascii_code.h
SOURCES = get_ascii_code.c main.c
OBJFILES = get_ascii_code.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

get_ascii_code: get_ascii_code.c get_ascii_code.h
main.o: main.c get_ascii_code.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
