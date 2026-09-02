#include <stdio.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioReceber;

    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;
    salarioReceber = salarioBase + gratificacao - imposto;

    printf("%.2f\n", salarioReceber);

    return 0;
}