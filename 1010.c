#include <stdio.h>

int main() {
	int codigo1, codigo2, quantia1, quantia2;
	float valor1, valor2;
    
	scanf("%d %d %f", &codigo1, &quantia1, &valor1);
	scanf("%d %d %f", &codigo2, &quantia2, &valor2);
    

	float pagar = (quantia1 * valor1) + (quantia2 * valor2);

	printf("VALOR A PAGAR: R$ %.2f\n", pagar);
    
	return 0;
}
