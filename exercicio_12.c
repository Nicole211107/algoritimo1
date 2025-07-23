/* O programa lê caracteres inseridos pelo usuário até que seja digitado o caractere '0'. 
Durante esse processo, ele conta quantos caracteres foram digitados antes de encerrar. */

#include <stdio.h>

int main() {
    char caractere;
    int totalDigitado = 0;

    printf("Digite caracteres (pressione '0' para encerrar):\n");

    while (1) {
        caractere = getchar();
        if (caractere == '0') break;
        totalDigitado++;
    }

    printf("Total de caracteres digitados: %d\n", totalDigitado);
}
