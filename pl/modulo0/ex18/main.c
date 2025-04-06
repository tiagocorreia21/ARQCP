#include <stdio.h>
#include "find_pattern.h"

int main() {

    char str[] = "ola Pedro, ola Laura";

    char str2[] = "la";

    int result = find_pattern(str, str2);

    printf("The number of times that %s is on %s : %u", str2, str, result);

    return 0; 
}