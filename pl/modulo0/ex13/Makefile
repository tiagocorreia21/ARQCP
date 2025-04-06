INCLUDES = 	count_char.h
SOURCES = count_char.c  main.c
OBJFILES = count_char.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

count_char.o: count_char.c count_char.h
main.o: main.c count_char.h 

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
