  /*em primeiro lugar o programa pede para o usuário digitar um número decimal (com ponto flutuante), depois ele converte esse número para a parte inteira
  e por fim o resultado, que é o número inteiro, é então mostrado na tela. */
  
  #include <stdio.h>
  int main(){
  float valor;
  int inteiro;

  printf("digite um valor com ponto flutuante");
  scanf("%f", &valor);

  inteiro=(int) valor;

  printf("o valor inteiro e %d\n", inteiro);

  return 0;

}