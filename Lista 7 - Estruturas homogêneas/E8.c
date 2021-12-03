/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 8 - Escrever um procedimento que preenche uma matriz M(10,10) e a escreve. Faça outros 
procedimentos que recebam uma matriz preenchida, realize as trocas indicadas a seguir 
(um procedimento para cada uma delas) e exiba a matriz resultante da troca:  
 
a) a linha 2 com a linha 8  
b) a coluna 4 com a coluna 10  
c) a diagonal principal com a diagonal secundária  
d) a linha 5 com a coluna 10.  
 
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar 
o seu uso. 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10 

void exibematriz (int matrizM[TAM][TAM]);
void trocaL2L8 (int matrizM[TAM][TAM], int matrizL2L8[TAM][TAM]);
void trocaC4C10 (int matrizM[TAM][TAM], int matrizC4C10[TAM][TAM]);
void trocadiagonais (int matrizM[TAM][TAM], int matrizDiagonais[TAM][TAM]);
void trocaL5C10 (int matrizM[TAM][TAM], int matrizL5C10[TAM][TAM]);

void preenchematriz (int matrizM[TAM][TAM])
{
    printf("Preenchendo a matriz M. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            printf("Digite o valor [%d][%d] da matriz: ", linha, coluna);
            scanf("%d", &matrizM[linha][coluna]);
        }
    }
}

void exibematriz (int matrizM[TAM][TAM])
{
    printf("Exibindo a matriz M. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            printf("%d ", matrizM[linha][coluna]);
        }
        printf("\n");
    }
}

void trocaL2L8 (int matrizM[TAM][TAM], int matrizL2L8[TAM][TAM])
{
    printf("Copiando matrizM para matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            matrizL2L8[linha][coluna] = matrizM[linha][coluna];
        }
    }
    printf("Trocando a linha 2 da matriz resultante pela linha 8 \n");
    for (int coluna = 0; coluna<TAM; coluna++)
    {
        matrizL2L8[1][coluna] = matrizM[7][coluna];
    }
    printf("Trocando a linha 8 da matriz resultante pela linha 2 \n");
    for (int coluna = 0; coluna<TAM; coluna++)
    {
        matrizL2L8[7][coluna] = matrizM[1][coluna];
    }
    printf("Exibindo a matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            printf("%d ", matrizL2L8[linha][coluna]);
        }
        printf("\n");
    }
}

void trocaC4C10 (int matrizM[TAM][TAM], int matrizC4C10[TAM][TAM])
{
    printf("Copiando matrizM para matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            matrizC4C10[linha][coluna] = matrizM[linha][coluna];
        }
    }
    printf("Trocando a coluna 4 da matriz resultante pela coluna 10. \n");
    for (int linha = 0; linha<TAM; linha++)
    {
        matrizC4C10[linha][3] = matrizM[linha][9];
    }
    printf("Trocando a coluna 10 da matriz resultante pela coluna 4. \n");
    for (int linha = 0; linha<TAM; linha++)
    {
        matrizC4C10[linha][9] = matrizM[linha][3];
    }
    printf("Exibindo a matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            printf("%d ", matrizC4C10[linha][coluna]);
        }
        printf("\n");
    }
}

void trocadiagonais (int matrizM[TAM][TAM], int matrizDiagonais[TAM][TAM])
{
    printf("Copiando matrizM para matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            matrizDiagonais[linha][coluna] = matrizM[linha][coluna];
        }
    }
    printf("Trocando a diagonal principal da matriz resultante pela diagonal secundária. \n");
    for(int i = 0; i <TAM; i++)
    {
        matrizDiagonais[i][i] = matrizM[i][TAM-i-1];
    }
    printf("Trocando a diagonal secundária da matriz resultante pela diagonal principal. \n");
    for(int i = 0; i <TAM; i++)
    {
        matrizDiagonais[i][TAM-i-1] = matrizM[i][i];
    }
    printf("Exibindo a matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            printf("%d ", matrizDiagonais[linha][coluna]);
        }
        printf("\n");
    }
}

void trocaL5C10 (int matrizM[TAM][TAM], int matrizL5C10[TAM][TAM])
{
    printf("Copiando matrizM para matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            matrizL5C10[linha][coluna] = matrizM[linha][coluna];
        }
    }
    printf("Trocando a linha 5 da matriz resultante pela coluna 10. \n");
    for (int i = 0; i<TAM; i++)
    {
        matrizL5C10[4][i] = matrizM[i][9];
    }
    printf("Trocando a coluna 10 da matriz resultante pela linha 5. \n");
    for (int i = 0; i<TAM; i++)
    {
        matrizL5C10[i][9] = matrizM[4][i];
    }
    printf("Exibindo a matriz resultante. \n");
    for(int linha = 0; linha <TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            printf("%d ", matrizL5C10[linha][coluna]);
        }
        printf("\n");
    }
}

int main(void)
{
    int matrizM[TAM][TAM], matrizL2L8[TAM][TAM], matrizC4C10[TAM][TAM], matrizDiagonais[TAM][TAM], matrizL5C10[TAM][TAM];

    preenchematriz(matrizM);
    exibematriz(matrizM);
    trocaL2L8(matrizM, matrizL2L8);
    trocaC4C10(matrizM, matrizC4C10);
    trocadiagonais(matrizM, matrizDiagonais);
    trocaL5C10(matrizM, matrizL5C10);
}