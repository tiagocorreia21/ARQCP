#include <stdio.h>

int sum(int num1, int num2);

int main() {
	
	int n1 = 5;
	int n2 = 10;
	
	int soma = sum(n1, n2);
	
	printf("A soma entre %u e %u é: %u\n", n1, n2, soma);
	
}

int sum(int num1, int num2) {
	return num1 + num2;
}
