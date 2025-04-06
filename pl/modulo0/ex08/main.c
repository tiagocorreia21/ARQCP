#include <stdio.h>
#include "get_ascii_char.h"

int main() {

    int c = 97;

    char result = get_ascii_char(c);

    printf("The ASCCI code for %u is %c \n", c, result);

    return 0;
}