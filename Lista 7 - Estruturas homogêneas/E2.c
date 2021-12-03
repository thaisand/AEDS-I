/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 2 - Faça um procedimento que preencha um vetor X de 10 elementos. A seguir faça uma função 
que receba um vetor preenchido, teste e copie todos os valores negativos deste vetor para um 
novo vetor (sem deixar elementos vazios entre os valores copiados), retornando este vetor 
como resultado. Faça um procedimento que recebe e exibe o conteúdo de um vetor. Faça um 
programa que faça as devidas declarações e acione os módulos para exemplificar o seu uso. 
 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void preencheVetorX (double vetorX[TAM]);
double gerarvaloresNeg (double vetorX[TAM], double vetorNeg[TAM], int *quantNeg);
void exibevetor (double vetorNeg[TAM], int *quantNeg);

void preencheVetorX (double vetorX[TAM]) 
{
    printf("Preenchendo vetor.\n");
    for (int i = 0; i < TAM ; i++)
    {
        printf("Digite o valor %d: ", (i+1));
        scanf("%lf", &vetorX[i]);
    }
}

double gerarvaloresNeg (double vetorX[TAM], double vetorNeg[TAM], int *quantNeg)
{
  int quantneg = 0;
  for (int i = 0; i < TAM ; i++)
  {
      if (vetorX[i] < 0)
      {
        vetorNeg[quantneg] = vetorX[i];
        quantneg++;
      }
  }
  *quantNeg = quantneg;
  return *vetorNeg;
}

void exibevetor (double vetorNeg[TAM], int *quantNeg)
{
    printf("Exibindo o vetor de valores negativos.\n");
    for(int i = 0; i < *quantNeg; i++)
    {
      printf("%.2lf ", vetorNeg[i]);
    }
}

int main(void) {
    double vetorX[TAM], vetorNeg[TAM];
    int *quantNeg;

    preencheVetorX(vetorX); 
    gerarvaloresNeg(vetorX, vetorNeg, &quantNeg);
    exibevetor(vetorNeg, &quantNeg);
    
    return 0;
}