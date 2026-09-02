#include <stdio.h>

int main() {
    float precoFabrica, percentualLucro, percentualImposto;
    float lucro, imposto, precoFinal;

    scanf("%f", &precoFabrica);
    scanf("%f", &percentualLucro);
    scanf("%f", &percentualImposto);

    lucro = precoFabrica * percentualLucro / 100;
    imposto = precoFabrica * percentualImposto / 100;
    precoFinal = precoFabrica + lucro + imposto;

    printf("%.2f\n", lucro);
    printf("%.2f\n", imposto);
    printf("%.2f\n", precoFinal);

    return 0;
}