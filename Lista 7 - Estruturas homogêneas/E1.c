/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 1 - Faça um procedimento que receba e preencha um vetor com as notas de uma turma de 10 
alunos. Faça um outro procedimento que receba um vetor preenchido com as notas, calcule 
a média da turma e conte quantos alunos obtiveram nota acima da média. Esse procedimento 
deve exibir a média e o resultado da contagem. Faça um programa que declare as devidas 
variáveis e acione os procedimentos. 
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void recebeNotas(double vetorNotas[TAM]);
void calculaMedia(double vetorNotas[TAM]);

void recebeNotas(double vetorNotas[TAM]) 
{
    printf("Preenchendo vetor com notas.\n");
    for (int i = 0; i < TAM; i++) 
    {
        printf("Digite a nota do aluno %d: ", (i+1));
        scanf("%lf", &vetorNotas[i]);
    }
}

void calculaMedia(double vetorNotas[TAM])
{
    float media = 0;
    int acimaMedia = 0;
    for (int i = 0; i < TAM; i++ )
    {
        media = media + vetorNotas[i];
        if (vetorNotas[i] >= 6)
        {
            acimaMedia++;
        }
    }
    media = (media/TAM);
    printf("A Média das notas da turma foi %.2lf.\n", media);
    printf("A turma possui %d alunos acima da média.\n", acimaMedia);
}

int main (void) {
    double vetorNotas[TAM];
    recebeNotas(vetorNotas);
    calculaMedia(vetorNotas);
    return 0;
}