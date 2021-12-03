/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 1 - Crie  um  programa  que  escreva  de  1  até  10  em  um  arquivo,  armazenando  um  número  por 
linha.  
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE* arquivo; //cria variável ponteiro para o arquivo
    arquivo = fopen("arquivo1.txt", "w"); //abre/cria o arquivo para escrita em seu início
    if (arquivo == NULL) //verifica se o arquivo foi aberto/criado 
    {
        printf("O árquivo é nulo. \n");
        return -1;
    }
    else //se o arquivo foi aberto/criado, realiza os comandos
    {
        fputc('1', arquivo); //escreve 1 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo  
        fputc('2', arquivo); //escreve 2 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo  
        fputc('3', arquivo); //escreve 3 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo  
        fputc('4', arquivo); //escreve 4 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo  
        fputc('5', arquivo); //escreve 5 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo  
        fputc('6', arquivo); //escreve 6 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo  
        fputc('7', arquivo); //escreve 7 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo  
        fputc('8', arquivo); //escreve 8 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo 
        fputc('9', arquivo); //escreve 9 no arquivo 
        fputc('\n', arquivo); //pula uma linha no arquivo 
        fputc('1', arquivo); //escreve 1 no arquivo 
        fputc('0', arquivo); //escreve 0 no arquivo 
        fclose(arquivo); //fecha o arquivo
        printf("Arquivo 1 criado."); 
    }
    return 0; //encerra o programa
}