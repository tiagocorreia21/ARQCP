void swap_nums(int *x, int *y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void swap_pointers(char **px, char **py) {
    char *tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}