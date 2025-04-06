#include <stdio.h>
#include "asm.h"

int a = 1;
int b = 2;

int main() {

    char result = isMultiple();

    printf("Result %d \n", result);

    return 0;
}