/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 10 - Considere um arquivo texto que armazene números em ponto flutuante em cada uma de suas 
linhas. Escreva um programa em C que determine o valor máximo, o valor mínimo e a média 
desses valores armazenados no arquivo. Imprima esses valores na tela. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    FILE *arquivo;
    arquivo = fopen("arquivo10.txt", "r");
    char texto[999];
    double f;
    int i = 0;
    int valor[999];
    while (!feof(arquivo))
    {
        fscanf(arquivo, "%s", &texto);
        // printf("%s\n", texto);
        f = atof(texto);
        printf("%.2lf\n", f);
        i++;
        printf("%d\n",i);
        valor[i] = texto[i];
        printf("%d\n", texto);
    }

    return 0;
}