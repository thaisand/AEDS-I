/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 4 - Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor 
de E: 
 
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N! 
  
*/

//incluir bibliotecas
#include<stdio.h>
//incluir função main com retorno vazio
int main (void)
{
  //declarar variáveis
  int N, fat;
  double resultado, E;
  //requerir valor ao usuário
  printf("Digite um valor inteiro e positivo: ");
  scanf("%d", &N);
  //zerar variável resultado
  resultado = 1;
  //criar loop
  for(int fat=1; fat<= N; fat=fat+1)
  {
    resultado = fat*resultado;
    E = (double)(1 + 1 /(pow((resultado + 1), fat))/resultado);
  }
  //imprimir resultados
  printf("O valor de E é %.2lf", E);
  //finalizar o programa
  printf("\nFim do programa.");
  return 0;
}