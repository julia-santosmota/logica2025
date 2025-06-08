#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    bool resolvido;
    int tempo_certo;
    int erros;
} Status;

int main() {
    int N;

    while (scanf("%d", &N) == 1 && N != 0) {

        Status problemas[26] = {0};

        for (int i = 0; i < N; i++) {
            char identificador;
            int T; 
            char julgamento[15];

            scanf(" %c %d %s", &identificador, &T, julgamento);

            int i = identificador - 'A';

            if (strcmp(julgamento, "correct") == 0) {
                
                if (!problemas[i].resolvido) {
                    problemas[i].resolvido = true;
                    problemas[i].tempo_certo = T;
                }
            } else { 
                problemas[i].erros++;
            }
        }

        int S = 0;
        int P = 0;

        for (int i = 0; i < 26; i++) {
            if (problemas[i].resolvido) {
                S++;
                
                P += problemas[i].tempo_certo;
                P += problemas[i].erros * 20;
            }
        }

        printf("%d %d\n", S, P);
    }

    return 0;
}
