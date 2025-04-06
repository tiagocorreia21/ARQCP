INCLUDES = 	find_pattern.h
SOURCES = find_pattern.c  main.c
OBJFILES = find_pattern.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

find_pattern.o: find_pattern.c find_pattern.h
main.o: main.c find_pattern.h 

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
