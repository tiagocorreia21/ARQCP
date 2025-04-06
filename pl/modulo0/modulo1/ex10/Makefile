INCLUDES =  where_is.h
SOURCES =  main.c where_is.c
OBJFILES = main.o where_is.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

where_is.o: where_is.c where_is.h
main.o: main.c where_is.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}