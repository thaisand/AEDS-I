/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 7 - Faça  um  programa  que  imprima  os  L  primeiros  elementos  da  série  de  Fibonacci.  Por 
exemplo,  se  o  usuário  digitou  o  número  40,  deverão  ser  apresentados  os  40  números  da 
sequência na tela. 
  
*/

//incluir bibliotecas
#include <stdio.h>
//incluir função main com retorno vazio 
int main(void)
{
  //cria variáveis
  int n, fibo, anterior, proximo, soma;
  //requere número de valores para usuário
  printf("Digite o número de valores da sequência Fibonacci:");
  scanf("%d", &n);
  //zera variáveis
  anterior = 0; 
  proximo = 1;
  soma = 0;
  fibo = 0;
  //verifica se fibo < n-1 e calcula resultados
  while (fibo < (n-1))
  {
    soma = proximo + anterior;
    anterior = proximo;
    proximo = soma;
    fibo = fibo + 1;
    printf("%d, ",anterior);
  }
  //calcula último resultado
  if (fibo >= (n-1))
  {
    soma = proximo + anterior;
    anterior = proximo;
    proximo = soma;
    fibo = fibo + 1;
    printf("%d.",anterior);
  }  
  //finaliza o programa
  printf("\nFim do programa.");
  return 0;
}