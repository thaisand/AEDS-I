/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 6 - Faça um programa para ler os coeficientes de uma equação do primeiro grau (ax + b = 0), 
  calcular e escrever a raiz da equação. 
*/

// incluir bibliotecas
#include <stdio.h>
// incluir função main com retorno vazio 
int main (void){
  //declarar as variáveis 
  float a, b, raiz, resultado; 
  // requerir ao usuário os coeficientes da equação
  printf("Digite o coeficiente a da equação:\n");
  scanf("%f", &a);
  printf("Digite o coeficiente b da equação: \n");
  scanf("%f", &b);
  raiz = ((-(b))/a);
  printf("A raiz da equação é %.2f\n", raiz);
  //finalizar o programa
  printf("Fim do programa.");
  return 0;
  }