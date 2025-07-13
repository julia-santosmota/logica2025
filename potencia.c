// calcular potencia de forma recursiva
#include <stdio.h>

int potencia(int x, int n){
    if (n==0){
        return 1;
    }else{
        return x * potencia(x, n-1);
    }
}
int main(){
    int a, b;
    printf("Digite a base para calcular a potencia:\n");
    scanf("%d", &a);
    printf("Digite o expoente para calcular a potencia\n");
    scanf("%d", &b);
    int resultado = potencia(a,b);
    printf("O resultado é %d \n", resultado);
    return 0;
}
