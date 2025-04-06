INCLUDES = 	check_string.h
SOURCES = check_string.c  main.c
OBJFILES = check_string.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

check_string.o: check_string.c check_string.h
main.o: main.c check_string.h 

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
