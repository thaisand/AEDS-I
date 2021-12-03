/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 4 - Escreva  um  procedimento  que  recebe  3  valores  reais  X,  Y  e  Z  e  que  verifique  se  esses 
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o 
tipo  de  triângulo  formado.  Para  que  X,  Y  e  Z  formem  um  triângulo  é  necessário  que  a 
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor 
do  que  a  soma  do  comprimento  dos  outros  dois  lados.  O  procedimento  deve  identificar  o 
tipo de triângulo formado observando as seguintes definições:  
 
- Triângulo Equilátero: os comprimentos dos 3 lados são iguais; 
- Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.  
- Triângulo Escaleno: os comprimentos dos 3 lados são diferentes. 
 
      Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e  
      para cada triângulo, acione o procedimento. 
*/
//requere bibliotecas
#include <stdio.h>

void valores(int lado1, int lado2, int lado3)
{
  //requere os lados do triangulo 
  printf ("Digite os comprimentos dos lados do triângulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);
  //insere condições
  if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2)
    if (lado1 == lado2 && lado2 == lado3)
    {
      printf("O triângulo é equilátero.\n");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
      printf("O triângulo é isósceles.\n");
    }
    else 
    {
      printf("O triângulo é escanelo.\n");
    }
  else 
  {
    printf("O triângulo não existe.\n");
    valores(lado1, lado2, lado3);
  }
}
//inicia o programa
int main(void) {
  //declara variaveis
  int triangulos, lado1, lado2, lado3, contador;
  //requere n
  printf("Digite para quantos triângulos você gostaria de realizar a verificação: ");
  scanf("%d", &triangulos);
  //chama a função n vezes
  for (contador = 1; contador <= triangulos; contador+=1)
  {
    valores(lado1, lado2, lado3);
  }
  //Encerra o programa
  printf("Fim do programa.\n");
  return 0;
}