/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 2 - Adaptar  o  programa  acima  para  que  ele  calcule  o  percentual  dos  valores  positivos, 
negativos e zeros em relação ao total de valores fornecidos. 
  
*/

//incluir bibliotecas
#include <stdio.h>
//criar função main 
int main(void) {
  //ler sequência de valores inteiros fornecidos pelo usuário
  //criar variáveis
  int valores, valores_pos, valores_neg, valores_nulos;
  double total, pct_pos, pct_neg, pct_nulos;
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
//calcular porcentagens
total = valores_pos + valores_neg + valores_nulos; 
pct_pos = (double)(valores_pos)/(total)*(100) ;
pct_neg = (double)(valores_neg/total)*(100) ;
pct_nulos = (double)(valores_nulos/total)*(100);
//imprimir resultados
printf("%.2lf %% dos valores inseridos pelo usuário foram positivos, enquanto %.2lf %% foram negativos e %.2lf %% foram nulos.\n",pct_pos, pct_neg, pct_nulos);
//encerrar o programa
printf("\nFim do programa");
return 0;
}