/*
  Autora: Thais Andreatta
  Data: 22/10
  Exercício 8 - Faça  um  programa  que  leia  três  valores  inteiros  e  chame  uma  função  que  receba  estes  3 
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o 
segundo menor valor na variável do meio, e o maior valor na última variável. A função deve 
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir 
os valores ordenados na tela no programa principal. 
*/

#include <stdio.h>

int ordena (int *a, int *b, int *c) {
  int variavel;
  if (a < b && b < c)
  {
    *a = *a;
    *b = *b;
    *c = *c;
  }
  else if (a<c && c<b)
  {
    variavel = *b;
    *b = *c;
    *c = *b;
  }
  else if (b<a && a<c)
  {
    variavel = *a;
    *a = *b; 
    *b = variavel; 
  }
  else if (b<c && c<a)
  {
    variavel = *a;
    *a = *b;
    *b = *c;
    *c = variavel;
  }
  else if (c<a && a<b)
  {
    variavel = *a;
    *a = *c;
    *c = *b;
    *b = variavel;
  }
  else if (c<b && b<a)
  {
    variavel = *a;
    *a = *c;
    *c = variavel;
  }
  return 0;
}

int main(void) {
  int a, b, c; 
  printf("Digite três valores inteiros: ");
  scanf("%d %d %d", &a, &b, &c);
  ordena(&a, &b, &c);
  printf ("Os valores ordenados são %d < %d < %d.",a, b, c);
}