/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 9 - Crie um programa que receba dados de vários alunos (Matricula e Telefone) e armazene em 
um  arquivo  texto.  Crie  no  mesmo  programa  uma  opção  de  ler  dados  de  um  arquivo  já 
armazenado dados de alunos. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int alunos, matricula, telefone; //cria variáveis
    printf("Digite a quantidade de alunos: "); //requere quantidade de alunos
    scanf(" %d", &alunos);
    FILE *arquivo; //cria variável ponteiro para arquivo 
    arquivo = fopen("dadosalunos.txt", "a+"); //abre arquivo para escrita em seu final e leitura
    for (int i = 1; i <= alunos; i++) //insere condicoes de quantidade de alunos
    {
        printf("Digite a matricula e telefone do aluno %d: ", i); //requere informações
        scanf(" %d %d", &matricula, &telefone);
        fprintf(arquivo, "%d %d\n", matricula, telefone); //salva informações no arquivo 
    }
    fclose(arquivo); //fecha o arquivo 
    return 0; //encerra o programa
}