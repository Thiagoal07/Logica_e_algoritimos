#include <stdio.h>

int main() {
    float pesoSaco, racaoGato, racaoRestante;

    scanf("%f", &pesoSaco);
    scanf("%f", &racaoGato);

    racaoRestante = pesoSaco * 1000 - (racaoGato * 2 * 5);

    printf("%.2f\n", racaoRestante / 1000);

    return 0;
}