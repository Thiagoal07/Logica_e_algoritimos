#include <stdio.h>
#include <math.h>

int main() {
    double numero, quadrado, cubo, raizQuadrada, raizCubica;

    scanf("%lf", &numero);

    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);
    raizQuadrada = sqrt(numero);
    raizCubica = cbrt(numero);

    printf("%.2lf\n", quadrado);
    printf("%.2lf\n", cubo);
    printf("%.2lf\n", raizQuadrada);
    printf("%.2lf\n", raizCubica);

    return 0;
}