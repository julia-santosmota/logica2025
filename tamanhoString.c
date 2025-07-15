// tamanho de uma string sem usar strlen

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int tamanhoString(const char *string) {
    int tamanho = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        tamanho++;
    }

    return tamanho;
}


int main() {
    char string[1000];

    printf("Digite uma frase:\n");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    int tam = tamanhoString(string);

    printf("O tamanho da string é : %d\n", tam);

    return 0;
}
