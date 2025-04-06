#include <stdio.h>
#include "count_char.h"

int main() {

    char str[] = "12333";

    int c = '3';

    int count = count_char(str, c);

    printf("The number of times that %u appears in %s is: %u \n", c, str, count);
}