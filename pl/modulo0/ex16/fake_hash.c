int fake_hash(char str[]) {

    int i = 0;

    int sum = 0;

    while(str[i] != '\0') {

        sum = sum + (int) (str[i] - '0');
        i++; 
    }

    return sum;
}