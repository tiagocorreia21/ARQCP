#include <stdio.h>
#include "func.h"

int main() {

    char str[] = "the numBERr must be saved";

    format_word(str);

    printf("%s\n", str);

    return 0;
}