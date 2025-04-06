void copy_vec(int *vec1, int n, int *vec2) {

    int *p1;
    int *p2;

    p1 = vec1;
    p2 = vec2;

    int i = 0;

    for (i = 0; i < n; i++) {

        *p2 = *p1;

        p1++;
        p2++;
    }
}