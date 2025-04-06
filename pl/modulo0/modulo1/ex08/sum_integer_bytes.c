int sum_integer_bytes(unsigned int *p) {

    unsigned char *byte_ptr;
    byte_ptr = (unsigned char *) p;

    int sum = 0;

    for(int i = 0; i < 4; i++) {
        sum += byte_ptr[i];
    }

    return sum;
}