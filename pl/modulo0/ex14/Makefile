INCLUDES = 	count_value.h
SOURCES = count_value.c  main.c
OBJFILES = count_value.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

count_value.o: count_value.c count_value.h
main.o: main.c count_value.h 

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
