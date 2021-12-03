/*
  Autora: Thais Andreatta
  Data: 22/10
  Exercício 1 - Escreva um programa em C que leia dois inteiros, armazenando-os em variáveis. O programa 
deve comparar os endereços das variáveis e exibir o maior deles. 
*/

#include <stdio.h>

int main(void) {
  int a, b, resultado; 
  printf ("Digite dois valores inteiros: \n");
  scanf("%d %d", &a, &b);
  int *aPt = &a;
  int *bPt = &b;
  if ( *aPt > *bPt)
  {
    resultado = *aPt;
    printf("O maior endereço de memória é %p, do inteiro %d \n", aPt, a);
    return 0;
  }
  else 
  {
    resultado = *bPt;
    printf("O maior endereço de memória é %p, do inteiro %d \n", bPt, b);
    return 0;
  }
}