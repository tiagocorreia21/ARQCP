#include <stdio.h>
#include "capitalize.h"

int main() {

    char str[] = "Inazuma";

    capitalize(str);

    printf("String capitalized: %s \n", str);

    return 0; 
}