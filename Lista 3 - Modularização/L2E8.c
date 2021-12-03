/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 8 - Faça um programa que imprima todos os elementos da série de Fibonacci menores que L. 
  
*/

//incluir bibliotecas
#include <stdio.h>
//incluir função main com retorno vazio 
int main(void)
{
  //incluir variáveis
  int n, contador, anterior, proximo, soma;
  //requerir valor de L ao usuário
  printf("Digite o valor de L:");
  scanf("%d", &n);
  //zerar variáveis
  anterior = 0; 
  proximo = 1;
  //criar loop
  while (anterior < n-1)
  {
    soma = proximo + anterior;
    //imprimir resultado parcial
    printf("%d, ", anterior);
    anterior = proximo;
    proximo = soma;
  }
  //encerrar loop
  if (anterior == n)
  anterior = proximo;
  //imprimir resultados
  printf("%d.", anterior);
  //encerrar programa
  printf("\nFim do programa.");
  return 0;
}