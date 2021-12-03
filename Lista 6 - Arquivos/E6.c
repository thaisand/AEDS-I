/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 6 - Faça um programa que solicite ao usuário um número, em seguida, imprima na tela todos os 
seus divisores. Salve em um arquivo texto a soma total desses divisores. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculadivisores (int numero, int *soma, int divisores) //inicia função calculadivisores
{
    int contador = 0; //cria variáveis
    int somadivisores = 0;
    for (divisores = 1; divisores <= numero; divisores++) //checa divisores do número
    {
        if (numero % divisores == 0)
        {
            printf("%d\n", divisores); //imprime divisores na tela
            contador++; //conta divisores
            somadivisores = somadivisores + divisores; //calcula soma dos divisores
        }
    }
    *soma = somadivisores; //salva resultado da soma dos divisores no endereço de memória de soma
    return 0; //finaliza função
}

int main () //inicia o programa
{
    int numero, soma, divisores; //cria variáveis
    soma = 0;
    printf("Digite um valor inteiro: "); //requere valor ao usuário
    scanf("%d", &numero);
    calculadivisores(numero, &soma, divisores); //chama função calculadivisores
    FILE *arquivo; //cria variável ponteiro para arquivo 
    arquivo = fopen("arquivo6.txt", "w"); //abre arquivo e grava informações em seu início
    fprintf(arquivo, "A soma dos divisores de %d é %d.\n", numero, soma); //grava informações no arquivo 
    fclose(arquivo); //fecha o arquivo
    return 0; //encerra o programa
}