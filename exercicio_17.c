/* Este código recebe cinco números inteiros do usuário e os organiza em ordem crescente.
Para isso, utiliza o algoritmo bubble sort, que compara e troca os valores conforme necessário. */

#include <stdio.h>

int main() {
    int vetor[5], i, j, aux;

    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Valores ordenados: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
