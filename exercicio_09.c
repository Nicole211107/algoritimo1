/* Este código recebe um número inteiro e identifica se ele é par ou ímpar, 
utilizando o operador de resto da divisão (%). */

#include <stdio.h>

int main() {
    int valor;

    printf("Informe um número inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O número informado é par.\n");
    } else {
        printf("O número informado é ímpar.\n");
    }
}
