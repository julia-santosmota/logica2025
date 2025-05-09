#include <stdio.h>

int main() {
    double fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        printf("Fib(%d) = %.0lf\n", N, fib[N]); 
    }
    return 0;
}
