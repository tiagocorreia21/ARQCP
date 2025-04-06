#include <stdio.h>
#include "integer_part.h"
#include "fractional_part.h"

int main() {

    char str[] = "123.456";

    int x_int = integer_part(str);

    int x_frac = fractional_part(str);

    printf("The integer part of %s is %d \n", str, x_int);

    printf("The fractional part of %s is %d \n", str, x_frac);

    return 0;
}