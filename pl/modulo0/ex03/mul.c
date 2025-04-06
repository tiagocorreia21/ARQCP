#include "sum.h"

int mul(int num1, int num2) {

	int resultado = 1;

	for(int i = num2; i < 1; i--) {
		resultado += sum(num1, num2);
	}
	return resultado;
}
