#include <stdio.h>

int main() {
    double SOMA = 0.0;
    int TERMO = 0;
    int NUM = 480;
    int DEN = 10;
    int AUX;

    while (1) {
        if (TERMO == 30) {
            break;
        } else {
            AUX = DEN % 2;
        }

        if (AUX == 0) {
            SOMA = SOMA + ((double)NUM / DEN);
        } else {
            SOMA = SOMA - ((double)NUM / DEN);
        }

        NUM = NUM - 5;
        DEN = DEN + 1;
        TERMO = TERMO + 1;
    }

    printf("%lf\n", SOMA);

    return 0;
}
