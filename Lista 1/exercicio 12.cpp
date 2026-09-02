#include <stdio.h>
#include <math.h>

int main() {
    double n1, n2, resultado;

    scanf("%lf", &n1);
    scanf("%lf", &n2);

    resultado = pow(n1, n2);

    printf("%.2lf\n", resultado);

    return 0;
}