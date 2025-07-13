// soma 1 até n de forma recursiva
#include <stdio.h>

int soma_ate_n (int n){
    if (n==1){
        return 1;
    } else{
        return n + soma_ate_n(n-1);
    }
}
int main(){
    int numero;
    printf("Escolha um número n para para somar de 1 até esse número\n");
    scanf("%d", &numero);
    int resultado = soma_ate_n(numero);
    printf("O resultado é %d\n", resultado);
    return 0;
}
