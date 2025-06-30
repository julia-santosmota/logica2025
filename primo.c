// é primo ou não?
#include <stdio.h>
#include <math.h>

int eh_primo(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0; 
    }
    return 1; 
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (eh_primo(num))
        printf("%d é primo.\n", num);
    else
        printf("%d não é primo.\n", num);

    return 0;
}
