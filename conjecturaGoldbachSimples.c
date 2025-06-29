#include <stdio.h>

int primo(int n) {
	for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
	return n > 1;
}

int main() {
	int n;
	printf("Numero par: ");
	scanf("%d", &n);
    
	for (int i = 2; i <= n/2; i++)
    	if (primo(i) && primo(n-i)) {
        	printf("%d + %d = %d\n", i, n-i, n);
        	return 0;
    	}
    
	printf("Nao encontrado!\n");
	return 1;
}