// "Modifique o algoritmo para contar a quantidade de primos menores que n. " -> enuciado
// usando o algoritmo do crivo de eratóstenes
#include <stdio.h>

void crivo(int n, int primo[]) {
	for (int i = 0; i <= n; i++)
		primo[i] = 1;

	for (int p = 2; p * p <= n; p++) {
		if (primo[p]) {
			for (int i = p * p; i <= n; i += p)
				primo[i] = 0;
		}
	}
}

int main () {
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	int primo[n + 1];
	crivo(n, primo);

	int contador = 0;
	for (int i = 2; i < n; i++) {
		if (primo[i])
			contador++;
	}

	printf("Existem %d números primos menores que %d.\n", contador, n);
	return 0;
}
