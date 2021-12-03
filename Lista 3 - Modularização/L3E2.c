/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 2 - A  prefeitura  de  uma  cidade  fez  uma  pesquisa  entre  os  seus  habitantes,  coletando  dados 
sobre  o  salário  e  número  de  filhos.  Faça  um  procedimento  que  leia  esses  dados  para  um 
número  não  determinado  de  pessoas,  calcule  e  exiba  a  média  de  salário  da  população  (a 
condição de parada pode ser um flag ou a quantidade N). Faça um programa que acione o 
procedimento. 
*/
//incluir bibliotecas
#include <stdio.h>
//função calcula média dos salários
void calculamedia()
{
  //declara as variaveis
  int pessoas, filhos, contador, acumulador;
  double salario, media_salario;
  //zera as variaveis
  salario = 0;
  media_salario = 0;
  filhos = 0;
  acumulador = 0;
  //requere o numero de habitantes
  printf("Digite o número de habitantes: ");
  scanf("%d", &pessoas);
  //requere o valor dos salarios e filhos 
  //calcula o valor da soma de todos os salarios
  for (contador = 1; contador <= pessoas; contador += 1)
  {
    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);
    printf("Digite o número de filhos: ");
    scanf("%d", &filhos);
    //calcula o valor da soma de todos os salarios
    acumulador = acumulador + salario;
  }
  //calcula a media dos salarios
  media_salario = (acumulador/pessoas);
  //retorna a media dos salarios
  printf("A média dos salários é %.2lf", media_salario);
}

//função principal
int main(void) {
  //chama a função
  calculamedia();
  //encerra o programa
  printf("\nFim do programa.\n");
  return 0;
}