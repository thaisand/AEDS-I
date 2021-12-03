/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 7 - Faça um programa para calcular e imprimir o valor de Y, dado um valor de X: 
  y = f(x) = {
    1, se x<= 1
    2, se 1<x<=2
    x^2, se 2<x<=3
    x^3, se x>3
  }
*/

//incluir bibliotecas
#include <stdio.h>
//criar função main que nao retorna nada
int main(void)
{
//requerir valor de x
  float x, y; 
  printf("Digite o valor de X: \n");
  scanf("%f",&x);
//calcular o valor de y de acordo com condições 
  if (x <= 1)
  {
  y = (1.00);
  }
  else if (x > 1 && x <= 2)
  {
  y = (2.00);
  }
  else if (x > 2 && x <= 3)
  {
  y = (x*x);
  }
  else if (x>3)
  {
  y = (x*x*x);
  }
  //imprimir o valor de y  
  printf("O valor de Y é %*.2f \n", y);
  //encerrar programa
  printf("Fim do programa.\n");
return 0;
}
