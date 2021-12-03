/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 9 - Fazer um programa para: 
  • ler um símbolo do teclado; 
  • identificar  com  a  estrutura  SWITCH  e  mostrar  as  seguintes  mensagens,  segundo  o caso: 
    o "SINAL DE MENOR" 
    o "SINAL DE MAIOR" 
    o "SINAL DE IGUAL" 
    o "OUTRO SINAL"  
*/

// incluir bibliotecas
#include <stdio.h>
//criar função main que retorna vazio
int main(void) {
  //determinar variáveis
  char simbolo = 'w';
  //requerir comando ao usuário
  printf("Escolha um símbolo e digite-o: \n");
  printf("'>', '<' ou '='\n");
  scanf("%c",&simbolo);
  //executar apenas um comando 
  switch(simbolo)
  {
    case '>':
      printf ("SINAL DE MAIOR.\n");
      break;
    case '<':
      printf("SINAL DE MENOR.\n");
      break;
    case '=':
      printf("SINAL DE IGUAL\n");
      break;
    default:
      printf("OUTRO SINAL.\n");
      break;
  }
  //finalizar o programa
  printf("Fim do programa.\n");
  return 0;
}