// converte numero decimal para binario

#include <stdio.h>

void converte_para_binario(int n) {
    if (n < 2) {
        printf("%d", n);
        return; 
    } 
    else {
        converte_para_binario(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int numero_decimal;

    printf("Digite um numero decimal inteiro para converter para binario: ");
    scanf("%d", &numero_decimal);

    if (numero_decimal < 0) {
        printf("Este algoritmo funciona somente para numeros positivos.\n");
    } else {
        printf("A representacao binaria de %d e: ", numero_decimal);
        converte_para_binario(numero_decimal);
        printf("\n"); 
    }

    return 0;
}
