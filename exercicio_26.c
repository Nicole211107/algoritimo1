/* O programa solicita dois números inteiros ao usuário e verifica se a soma entre eles é igual ou maior que 10.
Caso seja, exibe uma mensagem confirmando. */

#include <stdio.h>

int main() {
    int x, y;

    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    int resultado = x + y;

    if (resultado >= 10) {
        printf("A soma é maior ou igual a 10.\n");
    } else {
        printf("A soma é menor que 10.\n");
    }
}
