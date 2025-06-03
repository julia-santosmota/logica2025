#include <stdio.h>
#include <string.h>

int main() {
    int N, deslocamento;
    char mensagem[51]; 

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", mensagem);
        scanf("%d", &deslocamento);

        for (int j = 0; j < strlen(mensagem); j++) {
            mensagem[j] = (mensagem[j] - 'A' - deslocamento + 26) % 26 + 'A';
        }

        printf("%s\n", mensagem);
    }

    return 0;
}
