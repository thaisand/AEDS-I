/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 8 - Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo.  
 
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3) 
 
Faça um programa que leia N e imprima o valor retornado pela função. 
*/
//insere bibliotecas
#include <stdio.h>
#include <math.h>

int calculaS(int N)
{
  //declara variaveis
  int contador, x;
  double S;
  //calcula S
  for(contador=1;contador<=N; contador=contador+1)
  {
    x = (pow(N,2)+1)/(N+3);
    S = pow(x,N);
  }
  return S;

}
//inicia o programa
int main(void) {
  //declara variaveis
  int N; 
  //requere valor d n 
  printf("Digite o valor de N: ");
  scanf("%d", &N);
  //chama função
  calculaS(N);
  //imprime valor de S
  printf("O valor de S é %d\n", calculaS(N));
  //encerra o programa
  printf("Fim do programa.\n");
  return 0;
}