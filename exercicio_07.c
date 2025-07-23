/* O programa solicita dois pares de números inteiros. 
Em seguida, soma cada par separadamente e divide a soma do primeiro par pela soma do segundo, mostrando o resultado com precisão decimal. */

#include <stdio.h>

int main() {
    int par1_a, par1_b, par2_a, par2_b;
    float divisao;

    printf("Digite os dois primeiros números: ");
    scanf("%d %d", &par1_a, &par1_b);
    printf("Digite os dois segundos números: ");
    scanf("%d %d", &par2_a, &par2_b);

    divisao = (par1_a + par1_b) / (float)(par2_a + par2_b);
    printf("Resultado da divisão: %.2f\n", divisao);
}
