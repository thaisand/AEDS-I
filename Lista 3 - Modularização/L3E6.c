/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 6 - Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo.  
 
S = 1 + 1/1! + 1/2!  + 1/3! + ...+1 /N! 
 
Faça um programa que leia N e imprima o valor retornado pela função. 
*/
//inclui bibliotecas
#include <stdio.h>
#include <math.h>

//calcula fatorial de i
int fatorial (int i)
{
  int fat;
  fat = (i*fatorial(i-1));
  return fat;
}

//início do programa
int main(void) {
  //declara variaveis
  int N, i, x, y; 
  double S;
  //requere valor de N
  printf("Digite o valor de N: ");
  scanf("%d", &N);
  //calcula valor de S
  for (i = 0; i<N; i+=1)
  {
    S = ((S + 1)/(fatorial(i)+1)/fatorial(N));
  }
  //retorna o valor de S
  printf("O valor de S é %.2lf\n", S);
  //encerra o programa
  printf("Fim do programa.");
  return 0;
}