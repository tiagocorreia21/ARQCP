INCLUDES = 	fake_hash.h
SOURCES = fake_hash.c  main.c
OBJFILES = fake_hash.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

fake_hash.o: fake_hash.c fake_hash.h
main.o: main.c fake_hash.h 

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
