#include <stdio.h>

int main() {
	int testes, x, y;
	scanf("%d", &testes);

	for (int i = 0; i < testes; i++) {
    	scanf("%d %d", &x, &y);

    	int rafael = (3 * x) * (3 * x) + y * y;
    	int beto = 2 * (x * x) + (5 * y) * (5 * y);
    	int carlos = -100 * x + y * y * y;

    	if (rafael > beto && rafael > carlos) {
        	printf("Rafael ganhou\n");
    	} else if (beto > rafael && beto > carlos) {
        	printf("Beto ganhou\n");
    	} else {
        	printf("Carlos ganhou\n");
    	}
	}

	return 0;
}
