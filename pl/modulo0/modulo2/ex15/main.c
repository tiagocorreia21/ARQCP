#include <stdio.h>
#include "asm.h"

int a = 2;
int b = 2;
int c = 2;
int d = 2;

int main() {

    int result = compute();

    printf("Result: %d \n", result);

    return 0;
}
