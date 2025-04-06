# Variables
INCLUDES = average.h
SOURCES = average.c main.c
OBJFILES = average.o main.o
EXEC = prog_avg

# Suffix rules
.SUFFIXES : .c .o

# How to build an object .o from a code file .c ; $< -- file name
.c.o:
	gcc -g -Wall -Wextra -fanalyzer -c $<

# How to build the executable from object files
${EXEC}: ${OBJFILES}
	gcc ${OBJFILES} -o ${EXEC}

# Object file dependencies on source and header files
average.o: average.c average.h
main.o: main.c average.h

# Run the program
run: ${EXEC}
	./${EXEC}

# Clean up generated files
clean:
	rm -f ${OBJFILES} ${EXEC}
