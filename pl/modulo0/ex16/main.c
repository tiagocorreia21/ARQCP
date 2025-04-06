#include <stdio.h>
#include "fake_hash.h"

int main() {

    char str[] = "123";

    int result = fake_hash(str);

    printf("A soma dos carateres em %s é %u \n", str, result);

    return 0;
}