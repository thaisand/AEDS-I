/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 10 - Em uma eleição presidencial existem quatro candidatos. Os votos são informados através 
de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte 
codificação:  
 
1,2,3,4 = voto para os respectivos candidatos; 
5 = voto nulo;  
6 = voto em branco; 
 
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva: 
 
- total de votos para cada candidato;  
- total de votos nulos;  
- total de votos em branco. 
       
Como finalizador do conjunto de votos, tem-se o valor 0. 
  
*/

//inserir bibliotecas
#include <stdio.h>
//criar função main com retorno vazio
int main(void) {
  //declarar variáveis
  int voto, contador1, contador2, contador3, contador4, contador_nulo, contador_branco;
  //zerar variáveis
  voto=9;
  contador1 = 0;
  contador2 = 0;
  contador3 = 0;
  contador4 = 0;
  contador_nulo = 0;
  contador_branco = 0;
  //requerir dados ao usuário
  printf("Digite o código do seu voto: ");
  scanf("%d", &voto);
  //criar loop
  while (voto !=  0)
  {
    printf("Digite o código do seu voto: ");
    scanf("%d", &voto);
    //calcular número de votos de cada código
    if (voto == 1)
    {
      contador1 = contador1 + 1;
    }
    else if (voto == 2)
    {
      contador2=contador2+1;
    }
    else if (voto == 3)
    {
      contador3 = contador3 + 1;
    }
    else if (voto == 4)
    {
      contador4 = contador4 + 1;
    }
    else if (voto == 5)
    {
      contador_nulo = contador_nulo + 1;
    }
    else if (voto == 6)
    {
      contador_branco = contador_branco + 1;
    }
    //verificar se o código é válido
    else 
    {
      printf("Código inválido. ");
    }
    //encerrar loop
  }
  //imprimir resultados
  printf("O candidato 1 recebeu %d votos. \n", contador1);
  printf("O candidato 2 recebeu %d votos. \n", contador2);
  printf("O candidato 3 recebeu %d votos. \n", contador3);
  printf("O candidato 4 recebeu %d votos. \n", contador4);
  printf("Houveram %d votos nulos e %d votos em branco.", contador_nulo, contador_branco);
  //encerrar o programa
  printf("\nFim do programa. ");
  return 0;
}