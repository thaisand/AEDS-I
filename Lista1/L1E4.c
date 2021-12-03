/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 4 -Faça um algoritmo que segundo uma nota informada pelo usuário, verifique em qual faixa 
  a  mesma  se  encaixa  e  imprima  para  o  usuário  a  mensagem  correspondente  conforme  a 
  tabela abaixo:   
 
  Faixa das notas Mensagem 
  Nota > = 8 e Nota < = 10 Ótimo 
  Nota > = 7 e Nota < 8 Bom 
  Nota > = 5 e Nota < 7 Regular 
  Nota < 5 Insatisfatório 
*/

#include <stdio.h>
int main (void)
{
  // requerir ao usuário a sua nota 
  int nota;
  printf ("Digite sua nota: \n");
  scanf ("%d", &nota);
  // verificar em qual faixa a nota se encaixa e imprimir mensagem correspondente
  if (nota < 5 && nota > 0)
  {
    printf ("Insatisfatório");
  }
  else if (nota >=5 && nota < 7)
  {
    printf("Regular");
  }
  else if (nota >= 7 && nota < 8)
  {
    printf("Bom");
  }
  else if (nota >= 8 && nota <= 10)
  {
    printf("Ótimo");
  }
  // encerrar o programa
  printf("\nFim do programa.");
  return 0;
}