int count_bits_zero(long x) {

    int count = 0;

    while(x) {

        // check least significant bit
        count += x & 1;  

        // right shift to verify next bit
        x >>= 1;
    }
    
    return count;
}