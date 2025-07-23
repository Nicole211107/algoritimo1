/* O programa solicita ao usuário três números inteiros, calcula a soma e a média entre eles.
A média é feita com divisão por 3.0 para obter um resultado com ponto flutuante. */

#include <stdio.h>

int main() {
    int val1, val2, val3;

    printf("Informe três valores inteiros: ");
    scanf("%d %d %d", &val1, &val2, &val3);

    int total = val1 + val2 + val3;
    float mediaFinal = total / 3.0;

    printf("Soma total: %d\n", total);
    printf("Média: %.2f\n", mediaFinal);
}
