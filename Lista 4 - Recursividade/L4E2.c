/* 
  Autora: Thais Andreatta
  Data: 01/10
  Exercício 2 - Faça uma função para encontrar a soma dos dígitos de um número usando recursão. Faça um 
programa principal que leia um número, acione a função e exiba o resultado gerado. 
*/

#include <stdio.h> //inclui bibliotecas

int somardigitos(int numero) { //inicia somardigitos(numero)
  if (numero > 10) //insere condições
  {
    return (numero % 10 + somardigitos (numero / 10)); //retorna uma informação
  }
  else
  {
    return (numero); //retorna uma informação
  }

}

int main (void){ //início do programa
    int num; //cria variável num
    printf("Digite um número inteiro e positivo: "); //requere num ao usuário
    scanf("%d", &num);
    printf("A soma dos números de %d é %d.\n", num, somardigitos(num)); //chama somardigitos(num)
    printf("Fim do programa. \n")
    return 0; //encerra o programa
}