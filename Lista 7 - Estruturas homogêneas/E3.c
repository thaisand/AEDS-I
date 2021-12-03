/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 3 - Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando 
as posições de 0 a 9 em cada vetor). Faça um outro procedimento que receba dois vetores 
preenchidos  e  gera  um  novo  vetor  com  os  elementos  desses  2  vetores  intercalados  de  tal 
forma que nas posições ímpares do novo vetor estejam os elementos do primeiro vetor e nas 
posições pares os elementos do segundo vetor recebido por parâmetro. Faça um 
procedimento  que  receba  e  exiba  o  conteúdo  de  um  vetor.  Faça  um  programa  que  faça  as 
devidas declarações e acione os módulos para exemplificar o seu uso. 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10
#define TAM2 20

void preenchevetores (double vetorX[TAM], double vetorY[TAM], double vetorZ[TAM2]);
void exibevetores(double vetorX[TAM], double vetorY[TAM], double vetorZ[TAM2]);
void geravetorZ(double vetorX[TAM], double vetorY[TAM], double vetorZ[TAM2]);
void exibevetorZ(double vetorZ[TAM2]);


void preenchevetores (double vetorX[TAM], double vetorY[TAM], double vetorZ[TAM2]) 
{
    printf("Preenchendo o vetor X.\n");
    for (int i = 0; i < TAM; i++)
    {
      printf("Digite o valor %d: ", (i+1));
      scanf("%lf", &vetorX[i]);
    }

    printf("Preenchendo o vetor Y.\n");
    for (int j = 0; j < TAM; j++)
    {
      printf("Digite o valor %d: ", (j+1));
      scanf("%lf", &vetorY[j]);
    }
}

void exibevetores(double vetorX[TAM], double vetorY[TAM], double vetorZ[TAM2])
{
    printf("Exibindo vetor X: \n");
    for (int i = 0; i < TAM; i++)
    {
      printf("%.1lf " , vetorX[i]);
    }
    printf("\nExibindo vetor Y: \n");
    for (int j = 0; j < TAM; j++)
    {
      printf("%.1lf " , vetorY[j]);
    }
}

void geravetorZ(double vetorX[TAM], double vetorY[TAM], double vetorZ[TAM2]) 
{
    int contador = 0;
    for (int i=0; i < TAM; i++ )
    {
      vetorZ[contador] = vetorY[i];
      contador = contador + 2;
    }

    contador = 1;
    for (int i=0; i < TAM; i++ )
    {
      vetorZ[contador] = vetorX[i];
      contador = contador + 2;
    }
}

void exibevetorZ(double vetorZ[TAM2])
{
    printf("\nExibindo vetor Z: \n");
    for (int i = 0; i < (TAM2); i++)
    {
      printf("%.1lf ", vetorZ[i]);
    }
}

int main (void) 
{
    double vetorX[TAM], vetorY[TAM], vetorZ[TAM2];
    preenchevetores(vetorX, vetorY, vetorZ);
    exibevetores(vetorX, vetorY, vetorZ);
    geravetorZ(vetorX, vetorY, vetorZ);
    exibevetorZ(vetorZ);

    return 0;
}