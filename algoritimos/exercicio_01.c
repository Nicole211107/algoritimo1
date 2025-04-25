#include <stdio.h>
int main() {
  int a;
  int b;
  int c;

  printf("digite o primeiro valor");
  scanf("%d", &a);
  printf("digite o segundo valor");
  scanf("%d", &b);
  printf("digite o terceiro valor");
  scanf("%d", &c);

  if(((a+b)>c) || ((a+c)>b) || ((b+c)>a)){
    printf("e um triangulo");
    
    if((a==b)) && ((b==c)){
    printf("e um triangulo equilatero");
    }
  if((b !=c)) && ((a !=b)) && ((a !=c)){
    printf("e um triangulo escaleno");
  }
  if((b !=c)) && ((a==b)) || ((b !=c)) && ((a==c)) || ((a !=b)) && ((b==c)){
  printf("e um triangulo isoceles");
  }
  }else { 
  printf("os valores fornecidos nao formam um triangulo");
  }

  return 0;
  }
  
