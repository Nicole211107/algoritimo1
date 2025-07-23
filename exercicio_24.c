/* O código verifica se uma pessoa se enquadra nos critérios de alistamento militar obrigatório.
São consideradas a idade, o sexo e a existência de deficiência grave. */

#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char genero[15], deficiencia[5];

    printf("Qual sua idade? ");
    scanf("%d", &idade);

    printf("Informe seu sexo (masculino/feminino): ");
    scanf("%s", genero);

    printf("Você possui deficiência grave? (sim/nao): ");
    scanf("%s", deficiencia);

    if (strcmp(genero, "masculino") == 0 && idade >= 18 && idade <= 45 && strcmp(deficiencia, "nao") == 0) {
        printf("Alistamento obrigatório: SIM.\n");
    } else {
        printf("Alistamento obrigatório: NÃO.\n");
    }
}
