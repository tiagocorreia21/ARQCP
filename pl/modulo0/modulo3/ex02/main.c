#include <stdio.h>
#include "asm.h"

int main() {

    char str1[] = "Hello 5 World 5";
    char str2[] = "";

    str_copy_roman(str1, str2);

    printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);

    return 0;
}
