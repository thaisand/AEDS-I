/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 5 - Escreva  um  programa  que  concatene  o  conteúdo  de  dois  arquivos.  O  conteúdo  dos  dois 
arquivos deverá ser adicionado em um terceiro arquivo. 
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    FILE *arquivo1, *arquivo2, *arquivo3; //cria variável ponteiro para os arquivos
    arquivo1 = fopen("arquivo3.txt", "r"); //abre o arquivo para leitura
    arquivo2 = fopen("arquivo4.txt", "r"); //abre o arquivo para leitura
    arquivo3 = fopen("arquivo5.txt", "w"); //cria novo arquivo e escrita em seu início
    char texto[1000];
    if (arquivo3 == NULL) //testa se o arquivo foi criado de fato
    {
        printf("Erro na abertura do arquivo.\n");
        return 1;
    }
    else //se o arquivo existir, realiza os comandos
    {
        fgets(texto, 999, arquivo1); //lê e armazena conteúdo do primeiro arquivo na variável texto
        fputs(texto, arquivo3); //armazena conteúdo da variável texto no novo arquivo
        fgets(texto, 999, arquivo2); //lê e armazena conteúdo do segundo arquivo na variável texto
        fputs(texto, arquivo3); //armazena conteúdo da variável texto no novo arquivo
        printf("Novo arquivo criado com sucesso.\n"); 
    }
    fclose(arquivo1); //fecha os arquivos
    fclose(arquivo2);
    fclose(arquivo3);
    return 0; //finaliza o programa
}