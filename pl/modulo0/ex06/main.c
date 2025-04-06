#include <stdio.h>
#include "get_greater_digit.h"

int main() {

    int number = 789;

    int result = get_greater_digit(number);

    printf("The greater digit of %u is %u\n", number, result);

    return 0;
}