#include <stdio.h>
#include "get_ascii_code.h"

int main() {

    char c = 'a';

    int result = get_ascii_code(c);

    printf("The ASCII integer code for %c is %u\n", c, result);

    return 0;
}