#include <stdio.h>

int main() {
    char T;
    double matriz[12][12];
    double resultado = 0;
    int contador = 0;
    
    scanf(" %c", &T); 

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
            if (j > i) {
                resultado += matriz[i][j];
                contador++;
            }
        }
    }

    if (T == 'M') {
        resultado /= contador;
    }

    printf("%.1lf\n", resultado);
    return 0;
}
