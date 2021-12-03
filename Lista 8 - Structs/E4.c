/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 4 - Uma determinada biblioteca possui obras de ciências exatas, humanas e biológicas, totalizando 1500 volumes, distribuídos em cada uma das áreas. O proprietário resolveu agrupar as informações de cada livro no seguinte registro:
• Código de catalogação
• Doação (S/N)
• Nome da obra
• Nome do autor
• Editora
• Área
Construir um algoritmo que:
a) cadastre todos os volumes de cada uma das áreas em três vetores distintos
b) permita ao usuário fazer consulta às informações cadastradas fornecendo o código de catalogação e a área.
Existindo tal livro as informações são exibidas, caso contrário enviar mensagem de aviso. A consulta se repete até que o usuário digite código finalizador -1.
*/

#include <stdio.h>
#include <string.h>

typedef struct biblioteca {
  int codigo;
  char doacao;
  char nomeObra[200];
  char nomeAutor[200];
  char editora[200];
  char area[200];
}biblioteca;

void cadastraLivro (biblioteca livros[]) {
  printf("\nDigite o código do livro: ");
  scanf("%d", &livros->codigo);
  printf("Este livro foi uma doação? Digite S para sim e N para não: ");
  scanf(" %c", &livros->doacao);
  printf("Digite o nome da obra: ");
  scanf("%s", livros->nomeObra);
  printf("Digite o nome do autor: ");
  scanf("%s", livros->nomeAutor);
  printf("Digite a editora: ");
  scanf("%s", livros->editora);
  printf("");
}

int main(void) {
  //determinando quantos livros de cada área serão cadastrados 
  int exa, hum, bio; 
  printf("Digite, respectivamente, quantos livros de exatas, humanas e biológicas você gostaria de cadastrar: ");
  scanf("%d %d %d", &exa, &hum, &bio);
  //criando os respectivos vetores de cada área
  biblioteca exatas[exa], humanas[hum], biologicas[bio];
  //preenchendo cada área 
  for (int i = 0; i < exa; i++) 
  {
    printf("....Cadastrando livro de Exatas....");
    cadastraLivro(&exatas[i]);
    strcpy(exatas[i].area, "exatas");
  }
  for (int i = 0; i < hum; i++) 
  {
    printf("\n....Cadastrando livro de Humanas....");
    cadastraLivro(&humanas[i]);
    strcpy(humanas[i].area, "exatas");
  }
  for (int i = 0; i < bio; i++) 
  {
    printf("\n....Cadastrando livro de Biológicas....");
    cadastraLivro(&biologicas[i]);
    strcpy(biologicas[i].area, "exatas");
  }
  //consultando as informações cadastradas
  int codigo = 0;
  char area[15];
  printf("\nLivros cadastrados com sucesso! \nIniciando consulta. Para finalizar, digite o código de catalogação -1.\n");
  while (codigo != -1)
  {
    printf("\nDigite o código de catalogação do livro: ");
    scanf("%d", &codigo);
    if (codigo == -1)
    {
      break;
    }
    else
    {
      printf("Digite a área do livro que gostaria de consultar(exatas/humanas/biologicas): ");
      scanf("%s", area);
    }
    if (strcmp(area, "exatas") == 0)
    {
      printf("\n-----Informações do livro-----\n");
      for (int i = 0; i < exa; i++) 
      {
        if ((codigo == exatas[i].codigo) && (strcmp(area, "exatas") == 0))
        {
          printf("Código: %d \nFoi doação? %c \nNome da obra: %s \nNome do autor: %s \nEditora: %s\n", exatas[i].codigo, exatas[i].doacao, exatas[i].nomeObra, exatas[i].nomeAutor, exatas[i].editora);
        }
        else
        {
          printf("\nLivro não encontrado.\n");
        }
      }
    }
    else if (strcmp(area, "humanas") == 0)
    {
      printf("\n-----Informações do livro-----\n");
      for (int i = 0; i < hum; i++){
      if ((codigo == humanas[i].codigo) && (strcmp(area, "humanas") == 0))
      {
        printf("Código: %d \nFoi doação? %c \nNome da obra: %s \nNome do autor: %s \nEditora: %s\n", humanas[i].codigo, humanas[i].doacao, humanas[i].nomeObra, humanas[i].nomeAutor, humanas[i].editora);
      }
      else
        {
          printf("\nLivro não encontrado.\n");
        }
    }
    }
    else if (strcmp(area, "biologicas") == 0)
    {
      printf("\n-----Informações do livro-----\n");
      for (int i = 0; i < bio; i++){
      if ((codigo == biologicas[i].codigo) && (strcmp(area, "biologicas") == 0))
      {
        printf("Código: %d \nFoi doação? %c \nNome da obra: %s \nNome do autor: %s \nEditora: %s\n", biologicas[i].codigo, biologicas[i].doacao, biologicas[i].nomeObra, biologicas[i].nomeAutor, biologicas[i].editora);
      }
      else
        {
          printf("\nLivro não encontrado.\n");
        }
      }
    }

  }
  return 0;
}