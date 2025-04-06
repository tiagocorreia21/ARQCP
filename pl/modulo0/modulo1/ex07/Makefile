INCLUDES =  capitalize2.h
SOURCES =  main.c capitalize2.c
OBJFILES = main.o capitalize2.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

capitalize2.o: capitalize2.c capitalize2.h
main.o: main.c capitalize2.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}