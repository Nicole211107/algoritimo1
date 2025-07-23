/* Esse pequeno programa recebe dois inteiros do usuário, realiza a soma entre eles 
e mostra o resultado no final. */

#include <stdio.h>

int main() {
    int primeiro, segundo;

    printf("Informe dois números inteiros: ");
    scanf("%d %d", &primeiro, &segundo);

    printf("Resultado da soma: %d\n", primeiro + segundo);
}
