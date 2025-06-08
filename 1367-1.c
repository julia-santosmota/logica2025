#include <stdio.h>
#include <string.h>

int main() {
    int N;
    while (scanf("%d", &N) == 1 && N != 0) {
        int problema_resolvido[26] = {0};
        int tempo_solucao[26] = {0};
        int erros[26] = {0};
        for (int i = 0; i < N; i++) {
            char identificador;
            int T;
            char julgamento[15];

            scanf(" %c %d %s", &identificador, &T, julgamento);

            int indice = identificador - 'A';

            if (strcmp(julgamento, "correct") == 0) {
                if (problema_resolvido[indice] == 0) {
                    problema_resolvido[indice] = 1;
                    tempo_solucao[indice] = T;
                }
            } else {
                erros[indice]++;
            }
        }

        int S = 0;
        int P = 0;

        for (int i = 0; i < 26; i++) {
            if (problema_resolvido[i] == 1) {
                S++;
                P += tempo_solucao[i];
                P += erros[i] * 20;
            }
        }

        printf("%d %d\n", S, P);
    }

    return 0;
}
