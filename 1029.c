// versão usando variável global

#include <stdio.h>

int contador; 
int fib(int n) {
    contador++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int T, n;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        contador = -1;
        int resultado = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, contador, resultado);
    }
    return 0;
}
