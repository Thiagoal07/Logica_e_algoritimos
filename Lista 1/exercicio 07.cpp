#include <stdio.h>

int main() {
    float salarioBase, imposto, salarioReceber;

    scanf("%f", &salarioBase);

    imposto = salarioBase * 0.10;
    salarioReceber = salarioBase + 50 - imposto;

    printf("%.2f\n", salarioReceber);

    return 0;
}
