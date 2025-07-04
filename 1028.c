//versão com recursão

#include <stdio.h>


int mdc(int F1, int F2) {
	if (F2 == 0)
		return F1;
	return mdc(F2, F1 % F2);

}
int main () {
    int N;
    int F1, F2;
    scanf("%d", &N);
    for (int i = 0; i < N; i++ ){
        scanf("%d %d", &F1, &F2);
        int resultado = mdc(F1, F2);
        printf("%d\n", resultado);
    }

}
