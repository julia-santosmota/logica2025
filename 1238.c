#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char cadeia1[51], cadeia2[51], resultado[102];
    scanf("%d", &N);
    getchar(); 
    
    while (N--) {
        scanf("%s %s", cadeia1, cadeia2); 
        
        int len1 = strlen(cadeia1);
        int len2 = strlen(cadeia2);
        int max_len = (len1 > len2) ? len1 : len2;
        
        int k = 0;
        for (int i = 0; i < max_len; i++) {
            if (i < len1) resultado[k++] = cadeia1[i];
            if (i < len2) resultado[k++] = cadeia2[i];
        }
        resultado[k] = '\0';
        
        printf("%s\n", resultado);
    }
    
    return 0;
}
