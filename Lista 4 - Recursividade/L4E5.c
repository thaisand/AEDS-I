/* 
  Autora: Thais Andreatta
  Data: 01/10
  Exercício 5 - Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0: 
 
            S = 1/1! + 1/2!  + 1/3! + ...+1 /N! 
 
double serie (int n) 
 
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado. 
 
*/

#include <stdio.h> //inclui biblioteca stdio
double fat(int num); //indica módulo

double calculaS(double N) //inicia calculaS(N)
{
  int contador; //cria variáveis
  double S;
  for (contador = 1; contador <= N; contador ++) //inicia contador 
  {
    S = S + (1/fat(contador)); //calcula o valor de S chamando fat(contador)
  }
  return S; //retorna uma informação
}

double fat(int num){ //inicia fat(num)
  if (num==0) //insere condições
  {
    return 1; //retorna informação
  }
  else if (num > 0) 
  {
    num = (num*fat(num-1)); //atualiza valor de n
    return num; //retorna uma informação
  }
  else
  {
    return num; //retorna uma informação
  }
}

int main(void) { //inicia o programa
  int num; //cria variável num
  printf("Digite um número inteiro e positivo: "); //reque valor de num ao usuário
  scanf("%d", &num);
  printf("S = %.10lf\n", calculaS(num)); //chama calculaS(num)
  printf('Fim do programa. \n')
  return 0; //encerra o programa
}