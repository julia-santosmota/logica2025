// problema se o aluno foi aprovado ou reprovado, considerando a frequencia, a nota final e exame, usando o sistema da Unifesp

#include <stdio.h>

int main() {
    double nota_final, frequencia, exame;

    printf("Digite a nota final e frequência do aluno, com frequência em porcentagem (sem colocar símbolo de porcentagem): \n");
    scanf("%lf %lf", &nota_final, &frequencia);

    if (frequencia >= 60) {
        if (nota_final >= 6) {
            printf("Aprovado\n");
        } else if (nota_final >= 3 && nota_final < 6) {
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
