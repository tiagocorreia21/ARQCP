#include <stdio.h>
#include "asm.h"

int op1 = 1;
int op2 = 2;

int main() {

    char result = verify_flags();

    printf("Result: %d \n", result);

    return 0;
}