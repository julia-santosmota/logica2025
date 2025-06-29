// "Implemente uma função que leia um vetor de inteiros ordenados e um valor X, e diga se X está no vetor." -> enunciado
// usando como base o algoritmo Busca Binária
#include <stdio.h>

int busca_binaria(int arr[], int esquerda, int direita, int x) {
	while (esquerda <= direita) {
		int meio = esquerda + (direita - esquerda) / 2;
		if (arr[meio] == x)
			return meio;
		if (arr[meio] < x)
			esquerda = meio + 1;
		else
			direita = meio - 1;
	}
	return -1;
}

int main() {
	int n, x;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	int vetor[n];
	printf("Digite os %d elementos do vetor em ordem crescente:\n", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &vetor[i]);
	}
	printf("Digite o valor a ser buscado: ");
	scanf("%d", &x);
	int encontrado = busca_binaria(vetor, 0, n - 1, x);

	if (encontrado != -1)
		printf("O valor está no vetor.\n");
	else
		printf("O valor não está no vetor.\n");

	return 0;
}
