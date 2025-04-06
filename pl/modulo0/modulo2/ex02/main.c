#include <stdio.h>
#include "asm.h"

int op1 = 5;
int op2 = 5;

int main(void) {

    printf("Valor op1: %d \n", op1);

    printf("Valor op2: %d \n", op2);

    int res = 0;

    res = sum();

    printf("sum = %d:0x%x\n", res, res);

    return 0;
}