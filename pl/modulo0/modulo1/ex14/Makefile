INCLUDES =  count_words.h
SOURCES =  main.c count_words.c
OBJFILES = main.o count_words.o
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