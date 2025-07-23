/* O código solicita três números inteiros ao usuário e exibe esses valores na tela, 
preservando a mesma ordem de entrada. */

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    printf("Valores digitados: %d, %d, %d\n", valor1, valor2, valor3);
}
