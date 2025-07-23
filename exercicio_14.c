/* Este código solicita dois números reais e cinco caracteres.
Após a entrada dos dados, exibe todos os valores digitados organizadamente. */

#include <stdio.h>

int main() {
    float valorA, valorB;
    char ch1, ch2, ch3, ch4, ch5;

    printf("Digite dois números reais: ");
    scanf("%f %f", &valorA, &valorB);

    printf("Agora digite cinco caracteres: ");
    scanf(" %c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);

    printf("Números inseridos: %.2f e %.2f\n", valorA, valorB);
    printf("Caracteres inseridos: %c, %c, %c, %c, %c\n", ch1, ch2, ch3, ch4, ch5);
}
