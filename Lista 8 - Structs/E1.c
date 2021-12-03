/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 1 - Dados os seguintes campos de um registro: nome, dia de aniversário e mês de aniversário, 
    desenvolver um algoritmo que mostre em cada um dos meses do ano quem são as pessoas que fazem aniversário, 
    exibir também o dia. Considere um conjunto de 40 pessoas. 
*/

#include <stdio.h>

#define TAM 40

typedef struct registro 
{
  char nome[200];
  int diaAniversario;
  int mesAniversario;
} registro;

void preencheRegistro(registro *pessoa) {
  printf("Digite o nome da pessoa: ");
  scanf("%s", pessoa->nome);
  printf("Digite o dia do aniversário dessa pessoa: ");
  scanf("%d", &pessoa->diaAniversario);
  printf("Digite o mês do aniversário dessa pessoa: ");
  scanf("%d", &pessoa->mesAniversario);
  printf("\n");
}

void calculaMesAniversario(registro pessoa[]) {
  int i = 1;
  while (i<13)
  {
    printf("-----------------------------------------\n");
    printf("Os aniversariantes do mês %d são: \n", i);
    for (int j = 0; j<TAM; j++)
    {
      if (pessoa[j].mesAniversario == i)
      {
        printf("%s faz aniversário no dia %d!\n", pessoa[j].nome, pessoa[j].diaAniversario);
      }
    }
    i++;
  }

}

int main () {
  registro pessoas[TAM];
  for (int i = 0; i < TAM; i++)
  {
    preencheRegistro(&pessoas[i]);
  }
  calculaMesAniversario(pessoas);
  return 0;
}