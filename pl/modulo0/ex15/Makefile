INCLUDES = 	count_words.h
SOURCES = count_words.c  main.c
OBJFILES = count_words.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

count_words.o: count_words.c count_words.h
main.o: main.c count_words.h 

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
