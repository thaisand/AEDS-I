/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 5 - Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba 
uma matriz preenchida, calcule e retorne cada uma das somas a seguir (uma função para 
cada letra abaixo):  
 
a) da linha 4 de M  
b) da coluna 2 de M  
c) da diagonal principal  
d) da diagonal secundária  
e) de todos os elementos da matriz. 
 
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar 
o seu uso. 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void exibematriz (int matrizM[TAM][TAM]);
int somalinha4 (int matrizM[TAM][TAM]);
int somacoluna2 (int matrizM[TAM][TAM]);
int somadiagprincipal (int matrizM[TAM][TAM]);
int somadiagsecundaria (int matrizM[TAM][TAM]);
int somamatriz (int matrizM[TAM][TAM]);


void preenchematriz(int matrizM[TAM][TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j<TAM; j++)
        {
            printf("Digite o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &matrizM[i][j]);
        }
    }
    exibematriz(matrizM);
}

void exibematriz (int matrizM[TAM][TAM])
{
    printf("Exibindo matriz. \n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j<TAM; j++)
        {
            printf("%d ", matrizM[i][j]);
        }
        printf("\n");
    }
    somalinha4(matrizM);
}

int somalinha4 (int matrizM[TAM][TAM])
{
    int soma = 0;
    for (int coluna = 0; coluna < TAM; coluna ++)
    {
        soma = soma + matrizM[3][coluna]; //considerei a linha 4 como sendo a 3ª linha da matriz, já que ela vai de 0 a 4
    }
    return soma;
}

int somacoluna2 (int matrizM[TAM][TAM])
{
    int soma = 0;
    for (int linha = 0; linha < TAM; linha ++)
    {
        soma = soma + matrizM[linha][1]; //considerei a coluna 1 como sendo 2ª coluna da matriz, já que ela vai de 0 a 4
    }
    return soma;
}

int somadiagprincipal (int matrizM[TAM][TAM])
{
    int soma=0;
    for (int i = 0; i < TAM; i++)
    {
        soma = soma + matrizM[i][i];
    }
    return soma; 
}

int somadiagsecundaria (int matrizM[TAM][TAM])
{
    int soma = 0;
    for (int linha = 0; linha < TAM; linha++)
    {
        for (int coluna = TAM-1 ; coluna >= 0; coluna--)
        {
            if ((linha+coluna)==4)
            {
                soma = soma + matrizM[linha][coluna];
            }
        }
    }
    return soma;
}

int somamatriz (int matrizM[TAM][TAM])
{
    int soma = 0;
    for (int linha = 0; linha<TAM; linha++)
    {
        for (int coluna = 0; coluna<TAM; coluna++)
        {
            soma = soma + matrizM[linha][coluna];
        }
    }
    return soma;
}

int main (void)
{
    int matrizM[TAM][TAM];
    preenchematriz(matrizM);

    printf("A soma dos valores da linha 4 é %d.\n", somalinha4(matrizM));
    printf("A soma dos valores da coluna 2 é %d.\n", somacoluna2(matrizM));
    printf("A soma dos valores da diagonal principal é %d.\n", somadiagprincipal(matrizM));
    printf("A soma dos valores da diagonal secundária é %d.\n", somadiagsecundaria(matrizM));
    printf("A soma dos valores da matriz é %d.\n", somamatriz(matrizM));
}