#include <stdio.h>
#include "asm.h"

int main() {

    char str[] = "Hello 5 World 5";

    int result = five_count(str);

    printf("Result: %d \n", result);

    return 0;
}