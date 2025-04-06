#include <stdio.h>
#include "asm.h"

int op1 = 5;
int op2 = 5;

int main() {

    long res = another_sum();

    printf("res = %ld:0x%lx\n", res, res);

    return 0;
}