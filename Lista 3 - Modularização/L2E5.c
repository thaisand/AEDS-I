/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 5 - A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o 
salário e número de filhos de cada habitante. A prefeitura deseja saber:  
 
a) média do salário da população;  
b) média do número de filhos;  
c) maior salário;  
d) percentual de pessoas com salário até R$100,00.  
 
O final da leitura de dados se dará com a entrada de um salário negativo.
  
*/

//incluir bibliotecas
#include <stdio.h>
//criar função main com retorno vazio
int main(void) {
  //criar variáveis
  float salario, filhos, media_sal, media_fil, contador, acumulador_sal, acumulador_fil, percentual, maior;
  //zerar variáveis
  salario = 0;
  contador = 0; 
  acumulador_sal = 0;
  acumulador_fil = 0;
  percentual = 0;
  maior = 0;
  //inserir loop
  while (salario>=0)
  {
    printf("Digite o seu salário: ");
    scanf("%f", &salario);
    //inserir condições e fazer calculos
    //verifica se o salário é válido
    if (salario > 0)
    {
      printf("Digite quantos filhos você tem: ");
      scanf("%f", &filhos);
      printf("------------------------------------\n");
      contador = contador + 1;
      acumulador_sal = acumulador_sal + salario;
      acumulador_fil = acumulador_fil + filhos;
    }
    //armazena maior salário até então
    if (salario > maior)
    {
      maior = salario;
    }
    //verifica se o salário é menor que 100
    if (salario < 100 && salario >= 0)
    {
      percentual = percentual + 1;
    }
    //imprime resultados 
    else if (salario < 0)
    {
      printf("----------------------------------\n");
      media_sal = (acumulador_sal / contador) ;
      printf ("A média dos salários é R$%.2f.\n", media_sal);
      media_fil = acumulador_fil / contador;
      printf("A média do número de filhos é %.f.\n", media_fil);
      percentual = (percentual / contador)*100 ;
      printf("O maior salário é de R$%.2f.\n", maior);
      printf("O percentual de pessoas com salário até R$100,00 é %.2f%%", percentual);
      //finaliza o programa
      printf("\nFim do programa.");
      return 0;
    } 

  }

}