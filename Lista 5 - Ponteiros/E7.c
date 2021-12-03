/*
  Autora: Thais Andreatta
  Data: 22/10
  Exercício 7 - Faça  um  programa  que  leia  dois  valores  inteiros  e  chame  uma  função  que  receba  estes  2 
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda 
variável. Escreva o conteúdo das 2 variáveis na tela no programa principal. 
*/

#include <stdio.h>

int calculamaior (int *a, int *b)
{
  int variavel;
  if (*a > *b)
  {
    *a = *a;
    *b = *b;
  }
  else 
  {
    variavel = *a;
    *a = *b;
    *b = variavel;
  }
  return 0;
}

int main(void) {
  int a, b; 
  printf("Digite dois valores inteiros: ");
  scanf("%d %d", &a, &b);
  calculamaior(&a, &b);
  printf("O maior valor é %d e o menor valor é %d", a, b);
}