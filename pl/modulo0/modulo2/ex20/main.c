#include <stdio.h>
#include "asm.h"

short num = 10;

int main() {

    char res = check_num();

    printf("Result: %s", res);

    return 0;
}