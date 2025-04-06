int count_value(int vec[], int n, int value) {

    int count = 0;
    int i;

    for(i = 0; i < n; i++) {

        if (vec[i] == value) {

            count++;
        }
    }
    return count;
}