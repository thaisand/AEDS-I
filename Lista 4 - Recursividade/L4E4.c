/* 
  Autora: Thais Andreatta
  Data: 01/10
  Exercício 4 - Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas: 
int resto (int numerador, int denominador) 
Faça  um  programa  principal  que  leia  dois  números,  acione  a  função  e  exiba  o  resultado 
gerado. 
*/

#include <stdio.h> //inclui bibliotecas 

int divisao(int numerador, int denominador){ //inicia divisao (numerador, deominador)
  int resultado = 0; //zera variável resultado
  while (numerador>=denominador) //indica condições
  {
    if (numerador<denominador)
    {
      return resultado; //retorna uma informação
    }
    else
    {
      resultado = (resultado+(numerador/denominador)); //atualiza valor de resultado
      return (((numerador%denominador) + divisao(numerador-denominador, denominador))); //retorna uma informação
    }
  }
  return resultado; //retorna uma informação
}

int main(void) { //inicia função principal
  double num1, num2; //cria variáveis
  printf("Digite dois números inteiros e positivos: "); //requere valor de variáveis ao usuário
  scanf("%lf %lf", &num1, &num2);
  printf("%d\n",divisao(num1, num2)); //chama divisao(num1, num2)
  printf("Fim do programa.\n")
  return 0; //encerra o programa
}