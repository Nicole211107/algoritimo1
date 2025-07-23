/* Este programa solicita dois números inteiros e verifica se o resto da divisão entre eles é ímpar.
Antes disso, garante que o divisor seja diferente de zero para evitar erro. */

#include <stdio.h>

int main() {
    int valorA, valorB;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &valorA, &valorB);

    if (valorB != 0) {
        int resto = valorA % valorB;
        if (resto % 2 != 0) {
            printf("O resto da divisão é ímpar: %d\n", resto);
        } else {
            printf("O resto da divisão é par.\n");
        }
    } else {
        printf("Erro: divisor igual a zero.\n");
    }
}
