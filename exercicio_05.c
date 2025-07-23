/* Este programa utiliza a fórmula de Bhaskara para calcular as raízes reais de uma equação do segundo grau. 
Ele recebe os coeficientes a, b e c, calcula o delta e mostra as raízes caso existam. */

#include <stdio.h>
#include <math.h>

int main() {
    float coefA, coefB, coefC, delta, r1, r2;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &coefA, &coefB, &coefC);

    delta = (coefB * coefB) - (4 * coefA * coefC);

    if (delta < 0) {
        printf("Não há raízes reais.\n");
    } else {
        r1 = (-coefB + sqrt(delta)) / (2 * coefA);
        r2 = (-coefB - sqrt(delta)) / (2 * coefA);
        printf("Raízes: %.2f e %.2f\n", r1, r2);
    }
}
