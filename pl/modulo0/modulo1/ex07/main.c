#include <stdio.h>
#include "capitalize2.h"

int main() {

    char str[] = "Fontaine";

    capitalize2(str);

    printf("String capitalized: %s \n", str);

    return 0; 
}