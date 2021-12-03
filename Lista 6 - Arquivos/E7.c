/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 7 - Faça um programa para inserir N letras informadas pelo usuário em um arquivo texto. Onde 
N  é  uma  quantidade  de  letras  definida  pelo  usuário.  Depois  de  inseridas  as  N  letras,  o 
programa deverá ler todas as N letras do arquivo, calcular e mostrar a quantidade de vogais, 
ou seja,  quantas letras a, e, i, o, u. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int tamanho = 999; //cria variável inteira tamanho
    int contador = 0; //cria e zera o contador de vogais
    int i = 0;
    printf("Digite o número N de letras que gostaria de digitar: "); //requere número de letras ao usuário
    scanf("%d", &tamanho);
    char letra;
    char texto[999];
    FILE *arquivo; //cria variável ponteiro para o arquivo 
    arquivo = fopen("arquivo7.txt", "a"); //abre e escreve no final do arquivo

    if (arquivo == NULL) //checa se o arquivo existe
    {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }

    printf("Agora, insira N letras: "); //requere letras ao usuário
    fgets(texto, 999, arquivo); //salva texto de até 999 caracteres na variável texto
    fprintf(arquivo, "%s", texto); 
    if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U') //se o vetor correspondente for igual a 'a'
    {
        contador++; //adiciona 1 ao contador de vogais
    }
    printf("O arquivo possui %d vogais. \n", contador);
    fclose(arquivo);
    return 0;
}