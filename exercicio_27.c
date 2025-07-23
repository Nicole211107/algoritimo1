/* O código lê um número com ponto flutuante digitado pelo usuário.
Depois, converte o valor para inteiro e exibe o resultado convertido. */

#include <stdio.h>

int main() {
    float entrada;

    printf("Digite um número real (float): ");
    scanf("%f", &entrada);

    int inteiro = (int)entrada;
    printf("Valor convertido para inteiro: %d\n", inteiro);
}
