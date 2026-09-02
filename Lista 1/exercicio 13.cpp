#include <stdio.h>

int main() {
    float pes, polegadas, jardas, milhas;

    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    printf("%.2f\n", polegadas);
    printf("%.2f\n", jardas);
    printf("%.2f\n", milhas);

    return 0;
}