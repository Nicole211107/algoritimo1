/* Este programa solicita ao usuário um número inteiro e retorna o termo correspondente da sequência de Fibonacci.
A sequência é calculada utilizando recursão. */

#include <stdio.h>

int fib(int pos) {
    if (pos <= 1) return pos;
    return fib(pos - 1) + fib(pos - 2);
}

int main() {
    int posicao;

    printf("Digite a posição desejada na sequência de Fibonacci: ");
    scanf("%d", &posicao);

    int valor = fib(posicao);

    printf("O termo de posição %d é: %d\n", posicao, valor);
}
