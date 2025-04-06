INCLUDES = 	sum_matrix_values.h
SOURCES = sum_matrix_values.c  main.c
OBJFILES = sum_matrix_values.o main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

sum_matrix_values.o: sum_matrix_values.c sum_matrix_values.h
main.o: main.c sum_matrix_values.h 

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
