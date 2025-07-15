#include <stdio.h>
#include <ctype.h>  

int contarConsoantes(const char *texto) {
    int consoantes = 0;

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);

        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'))
            consoantes++;
    }

    return consoantes;
}


int contarVogais(const char *texto) {
    int vogais = 0;

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);

        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vogais++;
        }
    }

    return vogais;
}


int main() {
    char texto[1000];

    printf("Digite uma frase:\n");
    fgets(texto, sizeof(texto), stdin);

    int totalVogais = contarVogais(texto);
    int totalConsoantes = contarConsoantes(texto);

    printf("Total de vogais: %d\n", totalVogais);
    printf("Total de consoantes: %d\n", totalConsoantes);

    return 0;
}
