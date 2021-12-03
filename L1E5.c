/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 5 - Um  hotel  com  75  apartamentos  deseja  fazer  uma  promoção  especial  de  final  de  semana, 
concedendo  um  desconto  de  25%  na  diária.  Com  isto,  espera  aumentar  sua  taxa  de 
ocupação  de  50  para  80%.  Sendo  dado  o  valor  normal  da  diária,  calcular  e  imprimir:  
 
a) o valor da diária promocional;  
b) o valor total arrecadado com 80% de ocupação e diária promocional;  
c) o valor total arrecadado com 50% de ocupação e diária normal;  
d) a diferença entre estes dois valores. 
*/

// incluir bibliotecas
#include<stdio.h>
// incluir função main com retorno vazio 
int main (void)
{
  //requerir as variaveis
  float diaria_normal, diaria_promo, valor_diario_1, valor_diario_2, diferenca;
  printf("Digite o valor normal da diária: \n");
  scanf("%f", &diaria_normal);
  //calcular e imprimir o valor da diária promocional 
  diaria_promo = (diaria_normal*0.75);
  printf("O valor da diária promocional é %.2f \n",diaria_promo);
  //calcular e imprimir valor com ocupação 80% e diária promocional
  valor_diario_1 = (60*diaria_promo); //o número 60 é referente ao valor de 80% da diária (75*0.8)
  printf("O valor total arrecadado com 80%% de ocupação e diária promocional é de R$%.2f por dia.\n", valor_diario_1);
  //calcular e imprimir valor com ocupação 50% e diária normal
  valor_diario_2 = (37.5*diaria_normal); //o número 37.5 é referente ao valor de 50% da diária (75*0.5)
  printf("O valor total arrecadado com 50%% de ocupação e diária normal é de R$%.2f por dia. \n", valor_diario_2);
  //calcular e imprimir diferença entre os dois valores  
  diferenca = (valor_diario_1 - valor_diario_2);
  printf("A diferença entre estes dois valores é %.2f", diferenca);
//encerrar o programa
  printf("\nFim do programa.");
  return 0;
} 