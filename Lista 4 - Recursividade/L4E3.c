/* 
  Autora: Thais Andreatta
  Data: 01/10
  Exercício 3 - Faça uma função recursiva que calcula a divisão usando subtrações sucessivas: 
int divisao (int numerador, int denominador) 
Faça  um  programa  principal  que  leia  dois  números,  acione  a  função  e  exiba  o  resultado 
gerado. 
*/

#include <stdio.h> //inclui biblioteca stdio

double divisao(double numerador, double denominador){ //inicia divisao(numerador, denominador)
  double resultado = 0; //zera variável resultado 
  while (numerador>=denominador) //indica condições
  {
    if (numerador<denominador)
    {
      return resultado; //retorna uma informação 
    }
    else
    {
      resultado = (resultado+(numerador/denominador)); //atualiza valor de resultado
      return (((numerador/denominador) + divisao(numerador-denominador, denominador))); //retorna informação
    }
  }
  return resultado; //retorna informação
}

int main(void) { //inicia função principal
  double num1, num2; //cria variáveis
  printf("Digite dois números inteiros e positivos: "); //requere valor das variáveis ao usuário
  scanf("%lf %lf", &num1, &num2);
  printf("%.2lf",divisao(num1, num2)); //chama divisao(num1, num2)
  return 0; //encerra o programa
}