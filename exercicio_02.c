/* Esse programa recebe a altura do usuário e compara com a altura média do país (1.70m). 
Com base nisso, informa se a altura é acima, abaixo ou igual à média nacional. */

#include <stdio.h>

int main() {
    float alturaUsuario;
    float mediaBrasil = 1.70;

    printf("Informe sua altura (em metros): ");
    scanf("%f", &alturaUsuario);

    if (alturaUsuario > mediaBrasil) {
        printf("Você está acima da altura média nacional.\n");
    } else if (alturaUsuario < mediaBrasil) {
        printf("Você está abaixo da altura média nacional.\n");
    } else {
        printf("Você tem exatamente a altura média nacional.\n");
    }
}
