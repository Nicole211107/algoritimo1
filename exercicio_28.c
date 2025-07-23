/* O programa solicita ao usuário um número real.
O valor digitado é exibido com exatamente duas casas decimais na saída. */

#include <stdio.h>

int main() {
    float numero;

    printf("Digite um número com casas decimais: ");
    scanf("%f", &numero);

    printf("Valor formatado: %.2f\n", numero);
}
