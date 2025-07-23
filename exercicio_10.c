/* Este programa apresenta um menu com cinco itens. 
O usuário deve selecionar uma opção digitando seu número correspondente.
A escolha é processada com a estrutura switch-case. */

#include <stdio.h>

int main() {
    int escolha;

    printf("Menu de opções:\n");
    printf("1. Hambúrguer\n");
    printf("2. Batata Frita\n");
    printf("3. Suco de Laranja\n");
    printf("4. Refrigerante\n");
    printf("5. Milkshake\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            printf("Você escolheu Hambúrguer.\n");
            break;
        case 2:
            printf("Você escolheu Batata Frita.\n");
            break;
        case 3:
            printf("Você escolheu Suco de Laranja.\n");
            break;
        case 4:
            printf("Você escolheu Refrigerante.\n");
            break;
        case 5:
            printf("Você escolheu Milkshake.\n");
            break;
        default:
            printf("Opção não disponível.\n");
    }
}
