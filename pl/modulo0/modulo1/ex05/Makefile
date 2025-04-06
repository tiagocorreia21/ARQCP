INCLUDES =  copy_vec.h
SOURCES =  main.c copy_vec.c
OBJFILES = main.o copy_vec.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

copy_vec.o: copy_vec.c copy_vec.h
main.o: main.c copy_vec.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}