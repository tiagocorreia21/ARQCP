short rotate_left(short num, char nbits) {

    short rotations = 0;

    for (int i = 0; i < nbits; i++) {

        short last_bits_temp = (num >> 14) & 0x03;

        short first_bits_temp = (num << 14) & 0x03;

        
        
    }

    return rotations;
}

short rotate_right(short num, char nbits) {

    
}