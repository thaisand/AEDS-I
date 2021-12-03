/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 3 - Implemente um programa que abra o arquivo texto (criado no exercício anterior) e conte a 
quantidade de caracteres ‘a’ que estão presentes nele. Imprima a quantidade na tela. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    FILE *arquivo; //cria variável ponteiro para o arquivo 
    arquivo = fopen("arquivo2.txt", "r"); //abre e lê o arquivo
    int contador = 0; //contador de caracteres 'a'
    int i = 0; //contador de vetores 
    char texto[1000]; //variavel string que receberá os caracteres

    while (!feof(arquivo)) //enquanto nao for o final do arquivo, realiza os comandos
    {
        fscanf(arquivo, "%c", &texto); //lê informação do arquivo e a salva na variável texto
        if (arquivo == NULL) //checa se o arquivo existe
        {
            printf("Erro ao tentar ler o arquivo.\n");
            return -1;
        }
        else //se o arquivo existir, realiza os comandos
        {
            if (texto[i] == 'a') //se o vetor correspondente for igual a 'a'
            {
                contador++; //adiciona 1 ao contador de letras 'a'
            }
        }
    }
    fclose(arquivo); //fecha o arquivo
    printf("O arquivo possui %d letras 'a'.", contador); //exibe resultado 
    return 0; //encerra o programa
}