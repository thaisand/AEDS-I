/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 7 - Faça um procedimento que preencha 2 matrizes, A 4 x 6 e B 4 x 6. Faça uma função para 
cada uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna as 
matrizes indicadas :  
 
a) uma matriz S que seja a soma de A e B.  
b) uma matriz D que seja a diferença de A e B. (A - B).  
 
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar 
o seu uso. Escreva as matrizes resultantes do acionamento de cada uma das funções. 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM4 4
#define TAM6 6

int calculasoma (int matrizA[TAM4][TAM6], int matrizB[TAM4][TAM6], int matrizS[TAM4][TAM6]);
int calculadiferenca (int matrizA[TAM4][TAM6], int matrizB[TAM4][TAM6], int matrizD[TAM4][TAM6]);

void preenchematrizes (int matrizA[TAM4][TAM6], int matrizB[TAM4][TAM6])
{
    printf("Preenchendo a Matriz A.\n");
    for (int linha = 0; linha < TAM4 ; linha++)
    {
        for (int coluna = 0; coluna < TAM6; coluna++)
        {
            printf("Digite o valor [%d][%d] da matriz: ", linha, coluna);
            scanf("%d", &matrizA[linha][coluna]);
        }
    }
    printf("Preenchendo a Matriz B.\n");
    for (int linha = 0; linha < TAM4 ; linha++)
    {
        for (int coluna = 0; coluna < TAM6; coluna++)
        {
            printf("Digite o valor [%d][%d] da matriz: ", linha, coluna);
            scanf("%d", &matrizB[linha][coluna]);
        }
    }
}

int calculasoma (int matrizA[TAM4][TAM6], int matrizB[TAM4][TAM6], int matrizS[TAM4][TAM6]) 
{
    for (int linha = 0; linha < TAM4 ; linha++)
    {
        for (int coluna = 0; coluna < TAM6; coluna++)
        {
            matrizS[linha][coluna] = (matrizA[linha][coluna] + matrizB[linha][coluna]);
        }
    }
    return matrizS;
}

int calculadiferenca (int matrizA[TAM4][TAM6], int matrizB[TAM4][TAM6], int matrizD[TAM4][TAM6]) 
{
    for (int linha = 0; linha < TAM4 ; linha++)
    {
        for (int coluna = 0; coluna < TAM6; coluna++)
        {
            matrizD[linha][coluna] = (matrizA[linha][coluna] - matrizB[linha][coluna]);
        }
    }
    return matrizD;
}

int main (void)
{
    int matrizA[TAM4][TAM6], matrizB[TAM4][TAM6], matrizS[TAM4][TAM6], matrizD[TAM4][TAM6];
    
    preenchematrizes(matrizA, matrizB);
    calculasoma(matrizA, matrizB, matrizS);
    calculadiferenca(matrizA, matrizB, matrizD);

    printf("Exibindo matriz soma.\n");
    for (int linha = 0; linha < TAM4 ; linha++)
    {
        for (int coluna = 0; coluna < TAM6; coluna++)
        {
            printf("%d ", matrizS[linha][coluna]);
        }
        printf("\n");
    }

    printf("Exibindo matriz diferença.\n");
    for (int linha = 0; linha < TAM4 ; linha++)
    {
        for (int coluna = 0; coluna < TAM6; coluna++)
        {
            printf("%d ", matrizD[linha][coluna]);
        }
        printf("\n");
    }    
    return 0;
}