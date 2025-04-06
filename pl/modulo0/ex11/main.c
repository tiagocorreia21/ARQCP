#include <stdio.h>
#include "string_to_int.h"

int main() {

    char str[] = "12345";

    int result = string_to_int(str);

    printf("Result: %u \n", result);

    return 0;
}