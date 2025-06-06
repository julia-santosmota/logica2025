#include<stdio.h>

int main() {
    int linha;
    char T;
    double matriz[12][12];
    double resultado = 0;
    
    scanf("%d", &linha);
    scanf(" %c", &T);
    
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
            if(i == linha) {
                resultado += matriz[i][j];
            }
        }
    }
    
    if(T == 'M') {
        resultado /= 12.0;
    }
    
    printf("%.1lf\n", resultado);
    return 0;
}
