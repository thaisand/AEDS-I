/*
  Autora: Thais Andreatta
  Data: 22/10
  Exercício 5 - Escreva um programa em C que declare variáveis para armazenar um valor inteiro, um valor 
real  e  um  caracter.  Deve  existir  no  programa  ponteiros  associados  a  cada  um  deles.  O 
programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando 
os respectivos ponteiros. Exiba os endereços e os conteúdos de todas as variáveis e ponteiros 
antes e após a alteração. 
*/

#include <stdio.h>

int main(void) {
  int a = 5;
  double b = -6 ;
  char c = 'a' ;
  int *aPt = &a;
  double *bPt = &b;
  char *cPt = &c;
  printf("O inteiro contido no endereço de memória %p é %d, o real contido no endereço de memória %p é %.2lf e o caractere contido no endereço de memória %p é %c.", aPt, *aPt, bPt, *bPt, cPt, *cPt);
  printf("\n\nDigite, respectivamente, um valor inteiro, um valor real e um caractere: ");
  scanf("%d %lf %c", aPt, bPt, cPt);
  printf("\nO inteiro contido no endereço de memória %p agora é %d, o real contido no endereço de memória %p agora é %.2lf e o caractere contido no endereço de memória %p agora é %c.", aPt, *aPt, bPt, *bPt, cPt, *cPt);
}