/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 5 - Faça  um  procedimento  que  recebe  a  média  final  de  um  aluno,  identifica  e  exibe  o  seu 
conceito,  conforme  a  tabela  abaixo.  Faça  um  programa  que  leia  a  média  de  N  alunos, 
acionando o procedimento para cada um deles. (N deve ser lido do teclado) 
 
 
Nota Conceito 
Até 39 F 
40 a 59 E 
60 a 69 D 
70 a 79 C 
80 a 89 B 
A partir de 90 A 
 
*/
//incluir bibliotecas
#include <stdio.h>

void conceito(media)
{
  //insere condições e retorna conceito
  if (media <= 39)
  {
    printf("O aluno tem conceito F.\n");
  }
  else if (media >39 && media <=59)
  {
    printf("O aluno tem conceito E.\n");
  }
  else if (media>59 && media < 69)
  {
    printf("O aluno tem conceito D.\n");
  }
  else if (media>69 && media<=79)
  {
    printf("O aluno tem conceito C.\n");
  }
  else if (media>79 && media <=89)
  {
    printf("O aluno tem conceito B.\n");
  }
  else if (media>89)
  {
    printf("O aluno tem conceito A.\n");
  }
  else 
  {
    printf("Média final inválida.\n");
    conceito();
  }
  printf("---------------------------------\n");
}
//inicia o programa
int main(void) {
  //declara variáveis
  int alunos, contador;
  double media;
  //requere numero de alunos
  printf("Digite o número de alunos: ");
  scanf ("%d", &alunos);
  //chama a função numero de alunos vezes
  for (contador=1;contador<=alunos;contador += 1)
  {
    //requere média do aluno 
    printf("Digite a média final do aluno: ");
    scanf("%lf", &media);
    //chama função 
    conceito(media);
  }
  //finaliza o programa
  printf("Fim do programa.");
  return 0;
}