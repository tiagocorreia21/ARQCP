INCLUDES =  capitalize.h
SOURCES =  main.c capitalize.c
OBJFILES = main.o capitalize.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

capitalize.o: capitalize.c capitalize.h
main.o: main.c capitalize.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}