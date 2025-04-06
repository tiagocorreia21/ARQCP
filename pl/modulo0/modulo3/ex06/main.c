#include <stdio.h>
#include "asm.h"

int main() {

    char str[] = "Hello a";

    int result = encrypt(str);

    printf("Result: %d \n", result);

    return 0;
}
