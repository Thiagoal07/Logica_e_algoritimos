#include <stdio.h>

int main() {
    float salario, cheque1, cheque2, saldo;

    scanf("%f", &salario);
    scanf("%f", &cheque1);
    scanf("%f", &cheque2);

    saldo = salario - cheque1 - cheque1 * 0.0038;
    saldo = saldo - cheque2 - cheque2 * 0.0038;

    printf("%.2f\n", saldo);

    return 0;
}