INCLUDES = 	string_to_int.h
SOURCES = string_to_int.c main.c
OBJFILES = string_to_int.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

string_to_int.o: string_to_int.c string_to_int.h
main.o: main.c string_to_int.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
