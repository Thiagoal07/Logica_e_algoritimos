#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, total;

    scanf("%f", &deposito);
    scanf("%f", &taxa);

    rendimento = deposito * taxa / 100;
    total = deposito + rendimento;

    printf("%.2f\n", rendimento);
    printf("%.2f\n", total);

    return 0;
}