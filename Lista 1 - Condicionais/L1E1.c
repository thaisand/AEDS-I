/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 1 - Dado dois números imprimir somente o maior deles. 
  
*/

#include <stdio.h> // incluir a biblioteca de comandos

int main (void) // criar função main 
{
  // imprimir mensagem ao usuário  
  printf("Digite dois números reais: ");
  // criar variáveis 
  float num1, num2;
  // requerir dois números ao usuário 
  scanf ("%f %f", &num1, &num2);
  // analisar os números e imprimir apenas o maior deles
  if (num1 > num2)
  {
    printf ("O maior número é %.2f. \n ", num1);
  }
  else if (num2>num1)
  {
    printf("O maior número é %.2f. \n", num2);
  }
  else if (num1==num2)
  {
    printf("Os números são iguais.\n");
  }
  // fim do programa
  printf("Fim do programa.\n");
  return 0;
}