INCLUDES = 	size.string.h
SOURCES = size_string.c main.c
OBJFILES = size_string.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

size_string.o: size_string.c size_string.h
main.o: main.c size_string.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
