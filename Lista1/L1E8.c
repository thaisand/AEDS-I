/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 8 - Construa  um  programa  que  lê  uma  opção  conforme  abaixo  (usar  estrutura  SWITCH)  e  o 
salário atual do funcionário, calcula e exibe o novo salário: 
 
  A = aumento de 8% no salário; 
  B = aumento de 11% no salário; 
  C = aumento fixo no salário  
(de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00 se o salário atual for 
maior que R$ 1000). 
*/

// incluir bibliotecas
#include <stdio.h>
//criar função main com retorno nulo
int main(void) {
  //declarar variáveis 
  char opcao = 'k';
  double salario, novo_salario;
  //requerir opções ao usuário
  printf("Escolha uma das opções a seguir: \n");
  printf("A - aumento de 8 por cento no salário.\n");
  printf("B - aumento de 11 por cento no salário.\n");
  printf("C - aumento fixo no salário.\n");
  scanf("%c",&opcao);
  //requerir valor do salário 
  printf("Digite o valor do seu salário: \n");
  scanf("%lf",&salario);
  //executar apenas um caso 
  switch(opcao)
  {
    case 'a': 
      novo_salario = (salario * 1.08);
      printf("O novo salário é R$ %.2lf", novo_salario);
      break;
    case 'A':
      novo_salario = (salario * 1.08);
      printf("O novo salário é R$ %.2lf", novo_salario);
      break;
    case 'b':
      novo_salario = (salario * 1.11);
      printf("O novo salário é R$ %.2lf", novo_salario);
      break;
    case 'B':
      novo_salario = (salario * 1.11);
      printf("O novo salário é R$ %.2lf", novo_salario);
      break;     
    case 'c':
      if (salario <= 1000)
      {
        novo_salario = (salario + 350.00);
        printf("O novo salário é R$ %.2lf", novo_salario);
      }
      else if (salario > 1000)
      {
        novo_salario = (salario + 200.00);
        printf("O novo salário é R$ %.2lf", novo_salario);
      }
      break;
    case 'C':
      if (salario <= 1000)
      {
        novo_salario = (salario + 350.00);
        printf("O novo salário é R$ %.2lf", novo_salario);
      }
      else if (salario > 1000)
      {
        novo_salario = (salario + 200.00);
        printf("O novo salário é R$ %.2lf", novo_salario);
      }
      break;
      printf("A opção escolhida está incorreta.\n");
      break;
  }
//encerrar o programa
  printf("\nFim do programa.");
  return 0;
}