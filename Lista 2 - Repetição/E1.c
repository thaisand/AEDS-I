/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 1 - Fazer um programa leia uma seqüência de valores inteiros fornecida pelo usuário em uma 
linha de entrada e conte o número de valores positivos, negativos e zeros.
  
*/

//incluir bibliotecas
#include <stdio.h>
//criar função main 
int main(void) {
  //ler sequência de valores inteiros fornecidos pelo usuário
  //criar variáveis valores e contadores
  int valores, valores_pos, valores_neg, valores_nulos;
  valores = 0;
  valores_pos = 0;
  valores_neg = 0;
  valores_nulos = 0;
  //requerir valores ao usuário
  printf("Digite valores inteiros ou digite o valor 1234 para finalizar"":");
  //inserir condições
  while (valores != 1234)
  {
    scanf("%d", &valores);
    //inserir comandos se +, -, 0
    //inserir acumulador dos números digitados
    if (valores > 0 && valores != 1234)
    {
      valores_pos = valores_pos + 1; 
    }
    else if (valores < 0)
    {
      valores_neg = valores_neg + 1 ; 
    }
    else if (valores == 0)
    {
      valores_nulos = valores_nulos + 1;  
    }

  }
  //corrigir ortografia
  if (valores_nulos == 1)
  {
    printf ("O usuário digitou %d valores positivos, %d valores negativos e %d valor nulo.", valores_pos, valores_neg, valores_nulos);
  }
  else
  {
    printf("O usuário digitou %d valores positivos, %d valores negativos e %d valores nulos.", valores_pos, valores_neg, valores_nulos);
  }
  //finalizar o programa
  printf("\nFim do programa");
  return 0;
  }
