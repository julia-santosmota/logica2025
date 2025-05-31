#include <stdio.h>

int main() {
	int N;
	char linha[1001];
    
	scanf("%d", &N);
	getchar();
    
	while (N--) {
    	fgets(linha, 1001, stdin);
   	 
    	int i = 0;
    	while (linha[i] != '\n' && linha[i] != '\0') {
        	i++;
    	}
    	linha[i] = '\0';
   	 
    	for (int i = 0; linha[i]; i++) {
        	if ((linha[i] >= 'A' && linha[i] <= 'Z') ||
            	(linha[i] >= 'a' && linha[i] <= 'z')) {
            	linha[i] += 3;
        	}
    	}
   	 
    	for (int i = 0, j = strlen(linha) - 1; i < j; i++, j--) {
        	char temp = linha[i];
        	linha[i] = linha[j];
        	linha[j] = temp;
    	}
   	 
    	for (int i = strlen(linha)/2; linha[i]; i++)
        	linha[i] -= 1;
   	 
    	printf("%s\n", linha);
	}
    
	return 0;
}
