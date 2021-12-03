/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 7 - Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. 
A  função  deve  retornar  um  valor  lógico  (true  ou  false).  Faça  um  programa  que  lê  N 
números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, 
dependendo se foi retornado verdadeiro ou falso pela função. 
*/

//inclui bibliotecas 
#include <stdio.h>
#include <stdbool.h>

bool posneg(int valor)
{
  //insere condições
  if (valor >= 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

//inicia o programa
int main(void) {
//inclui variáveis
int N, contador, valor;
//requere quantas vezes que executar o programa
printf("Digite quantos valores você gostaria de verificar: ");
scanf("%d", &N);
//requere comandos n vezes
for (contador = 1; contador <= N; contador += 1)
{
  //requere valor inteiro 
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);
  //chama função 
  posneg(valor);
  //retorna resposta dependendo das condições
  if((posneg(valor)) == true)
  {
    printf("O valor é positivo.\n");
  }
  else  if ((posneg(valor)) == false)
  {
    printf("O valor é negativo.\n");
  }
}
  //encerra o programa 
  printf("Fim do programa.\n");
  return 0;
}