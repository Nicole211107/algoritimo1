/* Lê um valor real informado pelo usuário.
Armazena o número com casas decimais.
Exibe o valor formatado com duas casas. */

#include <stdio.h>

   int main() {
    float valor;

    printf("Digite um valor real: ");
    scanf("%f", &valor);

    printf("O valor digitado foi: %.2f\n", valor);
}
