/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 3 - Faça um programa que receba dez números e verifique se eles são divisíveis por 3 e 9 (ao 
mesmo  tempo),  por  2  e  por  5.  Caso  algum  número  não  seja  divisível  por  nenhum  desses 
números mostre a mensagem “Número não é divisível pelos valores”. Apresente também 
ao final a quantidade de números divisíveis por 3 e 9, por 2 e por 5. 
  
*/

#include <stdio.h>

int main(void) {
//criar variáveis
int numeros, contagem, soma1, soma2, soma3;
//zerar variáveis
soma1 = 0;
soma2 = 0;
soma3=0;

for (contagem = 1; contagem <=10; contagem++)
  {
    //requerir valor ao usuário
    printf("Digite o valor %d:\n", contagem);
    scanf("%d", &numeros);
    //caso não seja divisível por nenhum, imprimir: número não é divisível pelos valores 
    if (numeros % 3 != 0 && numeros % 9 != 0 && numeros % 2 != 0 && numeros % 5 != 0)
    {
      printf("Número não é divisível pelos valores\n");
    }
    //verificar se é divisível por 3 e 9
    else if (numeros % 3 == 0 && numeros % 9 == 0)
    {
      soma1 = soma1 + 1;
    }
    //verificar se é divisível por 5
    else if (numeros % 5 == 0)
    {
      soma2 = soma2 + 1;
    }
    //verificar se é divisível por 2
    else if (numeros % 2 == 0)
    {
      soma3 = soma3 + 1 ;
    }

  }
  //imprimir resultados
  printf("O usuário digitou %d números divisíveis por 3 e 9, %d números divisíveis por 2 e %d números divisíveis por 5.\n", soma1, soma3, soma2);
  //encerrar programa
  printf("\nFim do programa.")
  return 0;
}

