/* 
  Autora: Thais Andreatta
  Data: 01/10
  Exercício 1 - Faça uma função em C para contar os dígitos de um determinado número usando recursão. 
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado. 
*/

//incluir bibliotecas
#include <stdio.h>
//inicia contardigitos(numero)
int contardigitos(int numero) {
  int contador; //cria variável contador
  contador=0; //zera contador
  if (numero > 10) //inclui condições
  {
    contador++;
    return (contador + contardigitos(numero / 10));
  }
  else
  {
    contador++;
  }
  return contador; //retorna uma informação
}
//início do programa
int main (void){
    //cria variável
    int num;
    //requere num
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);
    //chama contardigitos(num)
    printf("O número %d contém %d dígito(s).\n", num, contardigitos(num));
    //encerra o programa
    printf("Fim do programa.\n");
    return 0;
}