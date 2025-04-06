INCLUDES = 	sum_triangular_matrix.h check_lower_triangular_matrix.h
SOURCES = sum_triangular_matrix.c check_lower_triangular_matrix.c main.c
OBJFILES = sum_triangular_matrix.o check_lower_triangular_matrix.h main.o
EXEC = prog

.SUFFIXES : .c .o 

.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

${EXEC}: ${OBJFILES}
		gcc ${OBJFILES} -o ${EXEC}

sum_matrix_values.o: sum_triangular_matrix.c sum_triangular_matrix.h
check_lower_triangular_matrix.o: check_lower_triangular_matrix.c
main.o: main.c sum_triangular_matrix.h check_lower_triangular_matrix.h

run: ${EXEC}
	./${EXEC}

clean:
	rm -f ${OBJFILES} ${EXEC}
