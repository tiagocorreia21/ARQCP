int sum_matrix_values(int mat[5][3]) {
    
    int lines = 5;
    int colunms = 3;

    int i = 0;
    int j = 0;

    int sum = 0;

    for (i = 0; i < lines; i++) {
        
        for (j = 0; j < colunms; j++) {
            
            sum += mat[i][j];
        }
    }
    return sum;
}