/* O código solicita uma letra do usuário e verifica se ela corresponde ao caractere 'o' ou 'O'.
Se corresponder, responde com 'e'. Caso contrário, informa que foi outra letra. */

#include <stdio.h>

int main() {
    char ch;

    printf("Digite uma letra: ");
    scanf("%c", &ch);

    if (ch == 'o' || ch == 'O') {
        printf("Letra detectada: 'o'. Resposta: 'e'.\n");
    } else {
        printf("Letra diferente de 'o' foi digitada.\n");
    }
}
