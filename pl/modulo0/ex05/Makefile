INCLUDES = 	cmp.h
SOURCES = cmp.c main.c
OBJFILES = cmp.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

cmp: cmp.c cmp.h
main.o: main.c cmp.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
