#include <stdio.h>

int main() {
    int numero, salario_horas;
    double horas, salario;
    scanf("%d %d %lf", &numero, &salario_horas, &horas);
    salario = salario_horas * horas;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n",salario);

    return 0;
}
