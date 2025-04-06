int sum_digits(int n) {
	
	int soma = 0;

	while(n != 0) {
	
		int digito = n % 10;
	
		soma += digito; 
		
		n = n / 10;
	}
	return soma;
}
