/* 
  Autora: Thais Andreatta
  Data: 02/10
  Exercício 10 - Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria 
desse nadador de acordo com a tabela abaixo. 
 
Idade (anos) Categoria 
5 a 7 F 
8 a 10 E 
11 a 13 D 
14 a 15 C 
16 a 17 B 
Acima de 18 A 
 
      Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela  
      função. 
 
*/
//insere bibliotecas 
#include <stdio.h>

char categoria (int idade){
  //insere condições e retorna categoria
  if (idade <5) 
  {
    printf("Idade inválida. \n");
    categoria (idade);
  }
  else if (idade >= 5 && idade <= 7)
  {
    return 'F';
  }
  else if (idade >= 8 && idade <= 10)
  {
    return 'E';
  }
  else if (idade >= 11 && idade <= 13)
  {
    return 'D';
  }
  else if (idade >= 14 && idade <= 15)
  {
    return 'C';
  }
  else if (idade == 16 || idade == 17)
  {
    return 'B';
  }
  else 
  {
    return 'A';
  }
  return 0;
}

//inicia o programa
int main(void) {
  //declara variaveis
  int idade; 
  //requere idade 
  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);
  //chama função
  categoria(idade);
  //imprime a categoria
  printf("A categoria desse nadador é %c\n", categoria(idade));
  //encerra o programa
  printf("Fim do programa. ");
  return 0;
}