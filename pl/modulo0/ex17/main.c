#include <stdio.h>
#include "check_string.h"

int main() {

    char str[] = "123";

    int hash = 6;

    int result = check_string(str, hash);

    if(result == 1) {
        printf("Correct hash code.\n");
    }

    if(result == 0) {
        printf("Icorrect hash code.\n");
    }

    return 0;
}