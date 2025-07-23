/* Este programa realiza a divisão entre dois números inteiros inseridos pelo usuário. 
Antes da operação, ele verifica se o divisor é diferente de zero para evitar erros. */

#include <stdio.h>

int main() {
    int numerador, denominador;

    printf("Informe dois números inteiros: ");
    scanf("%d %d", &numerador, &denominador);

    if (denominador != 0) {
        printf("Resultado da divisão: %d\n", numerador / denominador);
    } else {
        printf("Divisão inválida: divisor igual a zero.\n");
    }
}
