/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 2 - Crie um programa que receba um texto do usuário e grave o texto em um arquivo.  
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{   FILE *arquivo; //cria variável ponteiro para o arquivo
    char texto[999];  //variável do tipo string 
    arquivo = fopen("arquivo2.txt", "w"); //abre/cria arquivo para escrita em seu início
    if (arquivo == NULL) //testa se o arquivo foi aberto/criado de fato
    {
        printf("Erro na abertura do arquivo.\n");
        return 1;
    }
    else //se o arquivo foi aberto/criado, realiza os comandos
    {
        printf("Digite um texto: "); //requere texto ao usuário
        fgets(texto, 999, stdin); //salva texto de até 999 caracteres na variável texto
        fprintf(arquivo, "%s", texto); //armazena o texto no arquivo
        fclose(arquivo); //fecha o arquivo 
        printf("Dados gravados com sucesso!\n");
        return 0; //encerra o programa
    }
}