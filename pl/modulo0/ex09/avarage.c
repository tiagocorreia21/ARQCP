int average(int n1, int n2) {
    return (n1 + n2) / 2;
}

int average_array(int v [], int n) {

    int i = 0;

    int average = 0;

    for(i = 0; i < n; i++) {
        average = (v[i] + v[i + 1] ) / 2;
    }
    
    return average;
}