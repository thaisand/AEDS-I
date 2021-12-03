/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 2 -  Uma pessoa cadastrou um conjunto de 15 registros contendo o nome da loja, telefone e preço de um eletrodoméstico. Desenvolver um algoritmo que permita exibir qual foi a média dos preços cadastrados e uma relação contendo o nome e o telefone das lojas cujo preço estava abaixo da média. */

#include <stdio.h>

#define TAM 15

typedef struct eletrodomestico {
  char loja[200];
  int telefone;
  double preco;
} eletrodomestico;

void preencheConjunto(eletrodomestico *lojas) {
  printf("Digite o nome da loja: ");
  scanf("%s", lojas->loja);
  printf("Digite o telefone da loja: ");
  scanf("%d", &lojas->telefone);
  printf("Digite o preço do eletrodoméstico: ");
  scanf("%lf", &lojas->preco);
  printf("\n");
}

double calculaMedia(eletrodomestico lojas[TAM]) {
  double total, precoMedio;
  for (int i = 0; i<TAM; i++)
  {
    precoMedio = precoMedio + lojas[i].preco ; 
  }
  precoMedio = precoMedio/TAM;
  printf("O preço médio do eletrodoméstico é de R$%.2lf\n", precoMedio); 
  return precoMedio;
}

void exibeLojas (eletrodomestico lojas[TAM], double precoMedio) {
  for (int i = 0; i<TAM; i++)
  {
    if (lojas[i].preco < precoMedio)
    {
      printf("A loja %s possui o eletrodoméstico pelo valor de R$%.2lf.\nTelefone: %d\n", lojas[i].loja, lojas[i].preco, lojas[i].telefone);
    }
  }
}

int main(void) {
  eletrodomestico lojas[TAM];
  for (int i = 0; i < TAM; i++)
  {
    preencheConjunto(&lojas[i]);
  }
  float precoMedio = calculaMedia(lojas);
  exibeLojas(lojas, precoMedio);
  return 0;
}