// exercício proposto em "Algoritmos Interessantes e Elegantes"
// usando como base o MDC - Algoritmo de Euclides

#include <stdio.h>

int mdc(int a, int b) {
	if (b == 0)
		return a;
	return mdc(b, a % b);
}

int mmc(int a, int b) {
    int produto = a * b;
    int resultado = produto / mdc(a, b);
    return resultado;
}

int main(){
  int a, b;
	printf("Digite dois números inteiros para calcular o MDC: ");

	if (scanf("%d %d", &a, &b) != 2) {
		printf("Entrada inválida.\n");
		return 1;
	}
	if (a < 0) a = -a;
	if (b < 0) b = -b;
    int resultado = mmc(a, b);
    printf("MMC: %d\n", resultado);
}
