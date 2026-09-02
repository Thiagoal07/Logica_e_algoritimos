#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idade, idade2050;

    scanf("%d", &anoNascimento);
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    idade2050 = 2050 - anoNascimento;

    printf("%d\n", idade);
    printf("%d\n", idade2050);

    return 0;
}