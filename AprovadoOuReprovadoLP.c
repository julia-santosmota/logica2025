// o aluno foi aprovado ou reprovado em Lógica de Programação? 
#include <stdio.h>

int main() {
    double P1, P2, nota_final, frequencia, exame;
    int exercicios, nota_exercicios;

    printf("Digite a nota da P1, nota da P2, frequência e quantidade de exercícios realizados: \n");
    scanf("%lf %lf %lf %d", &P1, &P2, &frequencia, &exercicios);

    if (exercicios >= 30) {
        nota_exercicios = 10;
    } else {
        nota_exercicios = 0;
    }

    nota_final = ((P1 * 3) + nota_exercicios + (P2 * 6)) / 10;

    if (frequencia >= 60) {
        if (nota_final >= 6) {
            printf("Aprovado\n");
        } else if (nota_final >= 3) {
            printf("O aluno está de exame, digite a nota do exame: \n");
            scanf("%lf", &exame);
            if ((exame + nota_final) / 2 >= 6) {
                printf("Aprovado\n");
            } else {
                printf("Reprovado após exame\n");
            }
        } else {
            printf("Reprovado\n");
        }
    } else {
        printf("Reprovado por falta\n");
    }

    return 0;
}
