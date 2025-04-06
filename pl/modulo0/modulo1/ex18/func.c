#include <stdlib.h>

void populate(unsigned char *vec, int num, int limit) {

    int min = 0;
    int max = 20;

    for (int i = 0; i < 50; i++) {

        *vec = min + rand() % (max - min + 1);

        vec++;
    }
}

int check(int x, int y; int z) {
    return (x < y && y < z) ? 1 : 0;
}

int inc_nsets() {
    nsets++;
}