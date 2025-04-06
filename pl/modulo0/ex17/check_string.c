int check_string(char str[], int h) {

    int i = 0;

    int hash = 0;

    while (str[i] != '\0') {

        hash = hash + (int)(str[i] - '0');
        i++;
    }

    if(hash == h) {
        return 1;
    }
    
    return 0;
}