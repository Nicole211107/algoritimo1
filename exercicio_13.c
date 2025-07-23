/* Este programa solicita a data de nascimento do usuário e o ano atual. 
Com essas informações, ele calcula e exibe a idade aproximada em meses. */

#include <stdio.h>

int main() {
    int diaNasc, mesNasc, anoNasc, anoAtual, idadeMeses;

    printf("Informe sua data de nascimento (dia mês ano): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeMeses = (anoAtual - anoNasc) * 12 + (12 - mesNasc);

    printf("Sua idade em meses é aproximadamente: %d\n", idadeMeses);
}
