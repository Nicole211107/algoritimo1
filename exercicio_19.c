/* Este programa realiza a multiplicação de dois números reais.
O resultado é convertido explicitamente para inteiro e exibido na tela. */

#include <stdio.h>

int main() {
    float valor1, valor2;

    printf("Informe dois números reais: ");
    scanf("%f %f", &valor1, &valor2);

    int resultadoInt = (int)(valor1 * valor2);
    printf("Resultado (inteiro): %d\n", resultadoInt);
}
