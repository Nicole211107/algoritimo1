/* O código recebe três letras do usuário e as ordena em ordem alfabética.
A ordenação é feita por meio de trocas usando uma variável auxiliar. */

#include <stdio.h>

int main() {
    char x, y, z, temp;

    printf("Digite três caracteres: ");
    scanf(" %c %c %c", &x, &y, &z);

    if (x > y) { temp = x; x = y; y = temp; }
    if (y > z) { temp = y; y = z; z = temp; }
    if (x > y) { temp = x; x = y; y = temp; }

    printf("Ordem alfabética: %c %c %c\n", x, y, z);
}
