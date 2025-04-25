 /*em primeiro lugar ele cria uma variável chamada numero para armazenar um número real, depois o programa pede para o usuário digitar um número real.
 com isso o número digitado é armazenado na variável, e para finalizar o programa mostra o número digitado pelo usuário na tela, com duas casas decimais.*/
 
 #include <stdio.h>
  int main(){
    float numero;

    printf("digite um valor real");
    scanf("%f", &numero);

    printf("voce digitou %.2f\n", numero);


    return 0;


}