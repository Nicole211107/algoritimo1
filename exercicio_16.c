/* Este programa solicita ao usuário três dimensões de um objeto: altura, largura e comprimento.
As informações são armazenadas como números reais e exibidas com duas casas decimais. */

#include <stdio.h>

int main() {
    float alt, larg, comp;

    printf("Digite altura, largura e comprimento (em metros): ");
    scanf("%f %f %f", &alt, &larg, &comp);

    printf("Dimensões:\nAltura: %.2f m\nLargura: %.2f m\nComprimento: %.2f m\n", alt, larg, comp);
}
