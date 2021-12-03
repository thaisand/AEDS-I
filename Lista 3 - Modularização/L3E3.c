/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 3 - Faça um procedimento que recebe 3 valores inteiros por parâmetro e os  exiba em ordem 
crescente.  Faça  um  programa  que  leia  N  conjuntos  de  3  valores  e  acione  o  procedimento 
para cada conjunto. (N deve ser lido do teclado) 
*/
//incluir bibliotecas
#include <stdio.h>

void proced(int num1, int num2, int num3)
{
  //declara variáveis
  int primeiro, segundo, terceiro;
  //insere condições
  if (num1>num2 && num1<num3)
  {
    terceiro = num3;
    segundo = num1;
    primeiro = num2;
  }
  else if (num2>num1 && num2<num3)
  {
    primeiro = num1;
    segundo = num2;
    terceiro = num3;
  }
  else if (num3>num1 && num1<num2)
  {
    primeiro = num3;
    segundo = num1;
    terceiro = num2;
  }
  else if (num1<num3 && num3<num2)
  {
    primeiro = num1;
    segundo=num3;
    terceiro=num2;
  }
  else if (num3<num2 && num2<num1)
  {
    primeiro=num3;
    segundo = num2;
    terceiro = num1;
  }
  else if (num2<num3 && num3<num1)
  {
    primeiro=num2;
    segundo=num3;
    terceiro=num1;
  }
  //retorna resultado
  printf("%d < %d < %d\n", primeiro, segundo, terceiro);
}
//início do programa
int main(void) {
  //cria variáveis
  int N, contador, num1, num2, num3;
  N = 0;
  num1 = 0;
  num2 = 0;
  num3 = 0;
  //requere quantidade de vezes que o programa deve chamar a função 
  printf("Digite quantos conjuntos você quer ler: ");
  scanf("%d", &N);
  //chama função n vezes 
  for (contador =1; contador <= N; contador+= 1)
  {
    //requere 3 valores inteiros
    printf("\nDigite 3 valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    //chama função 
    proced(num1, num2, num3);
  }
  //encerra o programa
  printf("\nFim do programa. ");
  return 0;
}