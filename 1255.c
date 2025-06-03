#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char linha[201];
    
    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        int frequenciaLetras[26] = {0};
        fgets(linha, sizeof(linha), stdin);

        for (int j = 0; linha[j] != '\0'; j++) {
            char caractere = linha[j];

            if (caractere >= 'A' && caractere <= 'Z') {
                caractere = caractere - 'A' + 'a';
            }

            if (caractere >= 'a' && caractere <= 'z') {
                frequenciaLetras[caractere - 'a']++;
            }
        }

        int maiorContagem = 0;
        for (int j = 0; j < 26; j++) {
            if (frequenciaLetras[j] > maiorContagem) {
                maiorContagem = frequenciaLetras[j];
            }
        }

        for (int j = 0; j < 26; j++) {
            if (frequenciaLetras[j] == maiorContagem) {
                printf("%c", 'a' + j);
            }
        }
        printf("\n");
    }

    return 0;
}
