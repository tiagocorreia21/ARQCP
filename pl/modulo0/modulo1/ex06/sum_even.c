int sum_even(int *vec, int n) {

    int i = 0;

    int *p;
    p = vec;

    int sum = 0;

    for(i = 0; i < n; i++) {

        if(vec[i] % 2 == 0) {

            sum += vec[i];
        }
        p++;
    }
    return sum;
}