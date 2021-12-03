/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 9 - Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a 
média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê 
o número de alunos e imprime a média retornada pela função. 
 
*/
//inclui biblioteca
#include <stdio.h>

double calculamedia(double media){
  //declara variaveis
  double nota, acumulador;
  int aprovados = 0;
  nota = 0;
  acumulador = 0;
//requere nota do aluno
  printf ("Digite a nota do aluno:");
  scanf("%lf", &nota);
  //insere condições 
  if (nota >= 6)
  {
    aprovados=aprovados+1;
    acumulador = acumulador + nota;
  }
  else 
  {
    printf("Nota abaixo da média.\n");
  }
  //calcula media
  media = (acumulador / aprovados) ;
  //retorna resultado
  return media;
}
//inicia o programa
int main(void) {
  //declara variaveis
  int alunos, contador; 
  double media;
  //requere numero de alunos
  printf("\nDigite o número de alunos: ");
  scanf("%d", &alunos);
  //chama função numero de alunos vezes
  for (contador = 1; contador <= alunos; contador += 1)
  {
    calculamedia(media);
  }
  //imprime resultado
  printf("\nA média dos alunos aprovados é %.2lf\n", calculamedia(media) );
  //encerra o programa
  printf("Fim do programa. \n");
  return 0;
} 