#include <stdio.h>
#include "asm.h"

int op1 = 1;
int op2 = 2;

extern int op3;
extern int op4;

int main() {

    long result = yet_another_sum();

    printf("Result: %lu \n", result);

    return 0;
}
