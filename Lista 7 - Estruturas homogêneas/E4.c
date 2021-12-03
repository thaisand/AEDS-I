/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 4 - Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, não ocorreu temperatura 
inferior a 15°C, nem superior a 40°C. Faça um programa que armazene as temperaturas de 
cada dia de janeiro em um vetor (de 31 posições), calcule e imprima: 
• A menor e a maior temperatura ocorrida; 
• A temperatura média; 
• O número de dias nos quais a temperatura foi inferior a temperatura média. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TAM 31

int main (void) {
    double temperaturas[TAM];
    double menorTemp = LONG_MAX, maiorTemp = LONG_MIN, tempMedia = 0;
    int quantDias = 0;
    
    printf("Preenchendo o vetor: \n");
    for(int i = 0; i < TAM ; i++) 
    {
        printf("Digite a temperatura do dia %d: ", (i+1) );
        scanf("%lf", &temperaturas[i]);
    }
    printf("Vetor preenchido, calculando temperaturas.\n");
    for(int i = 0; i < TAM ; i++) 
    {
        if (temperaturas[i] < menorTemp)
        {
            menorTemp = temperaturas[i];
        }

        if (temperaturas[i] > maiorTemp)
        {
            maiorTemp = temperaturas[i];
        }

        tempMedia = tempMedia + temperaturas[i];
    }
    tempMedia = (tempMedia/TAM);
    printf ("A temperatura média foi de %.1lf°C.\n", tempMedia);

    for(int j = 0; j < TAM ; j++)
    {
        if (temperaturas[j] < tempMedia)
        {
            quantDias++;
        }
    }

    printf("A menor temperatura ocorrida foi de %.1lf°C. \nA maior temperatura ocorrida foi de %.1lf°C. \nHouveram %d dias nos quais a temperatura esteve abaixo da média.\n", menorTemp, maiorTemp, quantDias);

    return 0;
}