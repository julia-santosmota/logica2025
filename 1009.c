#include <stdio.h>

int main() {
	double vendas, salario_fixo, comissao, total;
	char nome[100];
	scanf("%s", nome);
	scanf("%lf %lf", &salario_fixo, &vendas);
	comissao = vendas * 0.15;
	total = salario_fixo + comissao;
	printf("TOTAL = R$ %.2lf\n", total);


	return 0;
}
