// look and say é uma sequência onde o próximo número é exatamente como ele é lido
// evitar usar valores muito grandes pois cresce exponencialmente

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void look_and_say(int n) {
    char *atual = malloc(2); 
    strcpy(atual, "1");

    for (int passo = 1; passo <= n; passo++) {
        printf("Termo %d: %s\n", passo, atual);

        size_t len = strlen(atual);
        char *proximo = malloc(len * 2 + 1);

        int i = 0, k = 0;
        while (atual[i]) {
            char c = atual[i];
            int cont = 1;

            while (atual[i + 1] && atual[i + 1] == c) {
                cont++;
                i++;
            }

            k += sprintf(&proximo[k], "%d%c", cont, c);
            i++;
        }

        proximo[k] = '\0';

        free(atual); 
        atual = proximo;  
    }

    free(atual);  
}
int main() {
    int n;
    printf("Digite quantos termos da sequência você quer: ");
    scanf("%d", &n);
    look_and_say(n);
    return 0;
}
