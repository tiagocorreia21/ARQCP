#include <stdio.h>
#include "sum.h"
#include "mul.h"

int main() {

	int n1 = 5;
	int n2 = 2;
	
	int resultado = mul(n1, n2);
	
	printf("A multiplicação de %u com %u é: %u\n", n1, n2, resultado);
	
	return 0;
}
