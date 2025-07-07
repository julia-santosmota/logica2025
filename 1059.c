#include <stdio.h>

int main(){
    int N = 0;
    while (1){
        N=N+2;
        printf("%d\n", N);
        if (N>=100){
            break;
        }
        else{
            continue;
        }
    }
    
    
    
    return 0;
}
