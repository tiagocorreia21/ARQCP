INCLUDES = 	get_ascii_char.h
SOURCES = get_ascii_char.c main.c
OBJFILES = get_ascii_char.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

get_ascii_char: get_ascii_char.c get_ascii_char.h
main.o: main.c get_ascii_char.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
