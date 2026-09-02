#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;

    scanf("%f", &salario);
    scanf("%f", &percentual);

    aumento = salario * percentual / 100;
    novoSalario = salario + aumento;

    printf("%.2f\n", aumento);
    printf("%.2f\n", novoSalario);

    return 0;
}