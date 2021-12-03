/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 6 - Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma 
dos  elementos  abaixo  da  diagonal  principal.  Mostre  na  tela  os  elementos  da  diagonal 
principal também.   
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 4

int main (void) 
{
    int matriz[TAM][TAM];
    int soma = 0;

    printf("Preenchendo a matriz.\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("Digite o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int coluna = 0; coluna<3; coluna++)
    {
        for (int linha = 1; linha < TAM; linha ++)
        {
            if (linha > coluna)
            {
                soma = soma + matriz[linha][coluna];
            }
        }
    }

    printf("A soma dos elementos abaixo da diagonal principal é %d.\n", soma);
    
    printf("Exibindo diagonal principal da matriz.\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (i == j)
            {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    return 0;
}