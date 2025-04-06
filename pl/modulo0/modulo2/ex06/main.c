#include <stdio.h>
#include "asm.h"

short op1 = 1;
short op2 = 2;

int main() {

    short result = exchangeBytes();

    printf("Result: %hd \n", result);

    return 0;
}