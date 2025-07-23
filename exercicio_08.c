/* Este programa coleta informações do usuário como nome, idade, sexo e altura.
Após a entrada dos dados, ele exibe todas essas informações formatadas na tela. */

#include <stdio.h>

int main() {
    char pessoaNome[50], sexo[10];
    int anos;
    float tamanho;

    printf("Informe seu nome: ");
    scanf("%s", pessoaNome);
    printf("Informe sua idade: ");
    scanf("%d", &anos);
    printf("Informe seu sexo: ");
    scanf("%s", sexo);
    printf("Informe sua altura (em metros): ");
    scanf("%f", &tamanho);

    printf("Nome: %s\nIdade: %d\nSexo: %s\nAltura: %.2f\n", pessoaNome, anos, sexo, tamanho);
}
