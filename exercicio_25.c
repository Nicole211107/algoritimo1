/* Este programa lê seis números fornecidos pelo usuário e os armazena em um array.
Depois, exibe esses números como se fossem escolhidos para um sorteio. */

#include <stdio.h>

int main() {
    int sorteio[6];

    printf("Informe 6 números para o sorteio:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &sorteio[i]);
    }

    printf("Números escolhidos: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", sorteio[i]);
    }
    printf("\n");
}
