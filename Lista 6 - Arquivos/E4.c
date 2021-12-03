/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 4 - Implemente um programa que leia um arquivo texto e imprima, linha a linha, o seu conteúdo 
na tela. Imprima também a quantidade de linhas que este arquivo possui. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    FILE *arquivo; //cria variável ponteiro para o arquivo 
    arquivo = fopen("arquivo2.txt", "r"); //abre o arquivo para leitura 
    int i = 0; //cria contador de vogais
    char texto[999]; //cria variável string texto

    while (!feof(arquivo)) //enquanto nao for o final do arquivo
    {
        if (arquivo == NULL) //testa o arquivo
        {
            printf("Erro ao tentar ler o arquivo. \n");
            return -1;
        }
        else //se o arquivo existir, realiza os comandos
        { 
            fgets(texto, 998, arquivo); //le cadeia de caracteres no arquivo e grava na variável texto
            printf("%s", texto); //imprime string do arquivo na tela
            i++;
        }
    }
    fclose(arquivo); //fecha o arquivo 
    printf("\nO arquivo possui %d linhas.\n", i); //imprime resultado
    return 0; //finaliza o programa
}