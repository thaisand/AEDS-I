/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 2 - Faça um algoritmo que leia 2 números inteiros e faça sua adição. Se o resultado for maior 
  ou  igual  a  10,  some  5  a  este  número.  Caso  contrário  some  7  a  ele.  Imprima  o  resultado 
  final.   
*/

// incluir a biblioteca de comandos
#include <stdio.h>
// criar função main que não retorna nada
int main (void) 
{
  // imprimir mensagem ao usuário requerindo dois números inteiros
  printf("Digite dois números inteiros: \n");
  // criar duar variáveis de inteiros 
  int num1, num2; 
  // requerir dois números inteiros ao usuário 
  scanf ("%d %d", &num1, &num2);
  // somar os dois números e atribuir a uma nova variável 
  int soma;
  soma = num1 + num2; 
  // especificar condições e imprimir o resultado 
  if (soma >= 10)
  {
    soma = soma + 5;
    printf ("O resultado final é %d. \n", soma);
  }
  else 
  {
    soma = soma + 7;
    printf ("O resultado final é %d. \n", soma);
  }
  // terminar o programa
  printf ("Fim do programa. \n ");
  return 0;
}