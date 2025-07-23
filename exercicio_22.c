/* Este programa calcula a resistência total equivalente entre dois resistores ligados em paralelo.
Utiliza a fórmula padrão da eletricidade: 1 / (1/rA + 1/rB). O resultado é exibido em ohms. */

#include <stdio.h>

int main() {
    float rA, rB;

    printf("Informe o valor do primeiro resistor (ohms): ");
    scanf("%f", &rA);
    printf("Informe o valor do segundo resistor (ohms): ");
    scanf("%f", &rB);

    float rTotal = 1 / ((1 / rA) + (1 / rB));

    printf("Resistência equivalente: %.2f ohms\n", rTotal);
}
