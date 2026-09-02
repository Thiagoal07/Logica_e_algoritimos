#include <stdio.h>

int main() {
    float horas, salarioMinimo, valorHora, salarioBruto, imposto, salarioReceber;

    scanf("%f", &horas);
    scanf("%f", &salarioMinimo);

    valorHora = salarioMinimo / 2;
    salarioBruto = horas * valorHora;
    imposto = salarioBruto * 0.03;
    salarioReceber = salarioBruto - imposto;

    printf("%.2f\n", salarioReceber);

    return 0;
}