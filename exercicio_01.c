/* O programa solicita três medidas ao usuário e verifica se elas podem formar um triângulo.
Caso seja possível, identifica se o triângulo é equilátero, isósceles ou escaleno. 
Se não puder formar um triângulo, exibe uma mensagem informando. */

#include <stdio.h>

int main() {
    float x, y, z;

    printf("Informe os três lados do triângulo:\n");
    scanf("%f %f %f", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Triângulo equilátero\n");
        } else if (x == y || x == z || y == z) {
            printf("Triângulo isósceles\n");
        } else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("As medidas informadas não formam um triângulo\n");
    }

    return 0;
}
