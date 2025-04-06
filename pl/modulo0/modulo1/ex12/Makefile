INCLUDES =  array_sort.h
SOURCES =  main.c array_sort.c
OBJFILES = main.o array_sort.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

array_sort.o: array_sort.c array_sort.h
main.o: main.c array_sort.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}