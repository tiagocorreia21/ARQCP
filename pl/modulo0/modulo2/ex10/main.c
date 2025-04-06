#include <stdio.h>
#include "asm.h"

int op1 = 1;
int op2 = 2;
int op3 = 3;

int main() {

    long long result = sum3ints();

    printf("Result: %llu \n", result);

    return 0;
}
