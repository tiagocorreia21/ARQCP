INCLUDES =  get_array_statistics.h
SOURCES =  main.c get_array_statistics.c
OBJFILES = main.o get_array_statistics.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

get_array_statistics.o: get_array_statistics.c get_array_statistics.h
main.o: main.c get_array_statistics.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}