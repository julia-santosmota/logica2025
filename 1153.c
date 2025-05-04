#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
    	double v1, v2, v3;
    	scanf("%lf %lf %lf", &v1, &v2, &v3);

    	double media = (v1 * 2 + v2 * 3 + v3 * 5) / 10;
    	printf("%.1lf\n", media);
	}

	return 0;
}
