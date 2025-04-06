#include <stdio.h>
#include "sum_digits.h"

int main() {

	int numero = 123;
	
	int soma_digitos = sum_digits(numero);
	
	printf("A soma dos digitos do numero %u é: %u\n", numero, soma_digitos);
	
	return 0; 
}
