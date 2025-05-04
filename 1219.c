#include <math.h>
#include <stdio.h>

int main() {
	int a, b, c;
	const double pi = 3.1415926535897;

	while (scanf("%d %d %d", &a, &b, &c) == 3) {
    	if (0 < a && a <= b && b <= c && c <= 1000 && (a + b) > c) {
        	double p = (a + b + c) / 2.0;
        	double area = sqrt(p * (p - a) * (p - b) * (p - c));
        	double raio = area / p;
        	double R = (a * b * c) / (4.0 * area); 
        	double rosas = pi * raio * raio;
        	double violetas = area - rosas;
        	double girassois = pi * R * R - area;

        	printf("%.4lf %.4lf %.4lf\n", girassois, violetas, rosas);
    	}
	}

	return 0;
}
