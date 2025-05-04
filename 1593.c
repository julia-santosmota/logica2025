#include <stdio.h>
#include <string.h>


int divide_dois(char numero[]) {
	int i, tamanho = strlen(numero);
	int resto = 0;

	for (i = 0; i < tamanho; i++) {
    	int digito = numero[i] - '0';
    	int atual = resto * 10 + digito;
    	numero[i] = (atual / 2) + '0';
    	resto = atual % 2;
	}


	while (numero[0] == '0' && strlen(numero) > 1) {
    	for (i = 0; i < strlen(numero); i++) {
        	numero[i] = numero[i + 1];
    	}
	}

	return resto;
}

int bit(char numero[]) {
	int cont = 0;
	while (!(strlen(numero) == 1 && numero[0] == '0')) {
    	if (divide_dois(numero) == 1) {
        	cont++;
    	}
	}
	return cont;
}

int main() {
	int T;
	scanf("%d", &T);
	char numero[1100];

	for (int i = 0; i < T; i++) {
    	scanf("%s", numero);
    	printf("%d\n", bit(numero));
	}

	return 0;
}
