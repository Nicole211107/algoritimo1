/* O programa solicita dois anos (início e fim) e exibe todos os anos bissextos entre eles.
A verificação é feita com base na regra de divisibilidade por 4, 100 e 400. */

#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Ano inicial: ");
    scanf("%d", &inicio);
    printf("Ano final: ");
    scanf("%d", &fim);

    printf("Anos bissextos entre %d e %d:\n", inicio, fim);
    for (int ano = inicio; ano <= fim; ano++) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("%d ", ano);
        }
    }
    printf("\n");
}
