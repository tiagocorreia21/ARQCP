int get_greater_digit(int n) {

    int greater_digit = 0;

    while(n != 0) {

        if (n % 10 > greater_digit) {
            greater_digit = n % 10;
        }
        n = n / 10;
        
    }
    return greater_digit;
}