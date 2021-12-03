/* 
  Autora: Thais Andreatta
  Data: 17/09
  Exercício 9 - Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele 
comercializa.  Para  isto,  mandou  digitar  uma  linha  para  cada  mercadoria  com  o  preço  de 
compra e de venda de cada uma. A última linha contém preço de compra igual a 0. Escreva 
um programa que: 
 
a) Determine e escreva quantas mercadorias proporcionaram: 
i) Lucro < 10% 
ii) 10% <= lucro <= 20% 
iii) Lucro > 20% 
b) Determine e escreva o valor total de compra e de venda de todas as mercadorias, 
assim como o lucro total. 
*/

//incluir bibliotecas
#include <stdio.h>
//incluir função main com retorno vazio
int main(void)
{
  //criar variáveis
  double compra, venda, acumulador1, acumulador2, lucro, lucropct, lucro10, _10lucro20, lucro20; 
  //zerar variável compra
  compra = 0;
  //reequerir informações ao usuário
  printf("Digite o preço de compra da mercadoria: ");
  scanf ("%lf", &compra);
  printf("Digite o preço de venda da mercadoria: ");
  scanf("%lf",&venda);
  printf("O preço de compra da mercadoria é R$%.2lf e o preço de venda é R$%.2lf. \n",compra, venda);
  printf ("------------------------------------------------------------------------\n");
  //criar loop
  while(compra > 0)
  {
    printf("Digite o preço de compra da mercadoria: ");
    scanf ("%lf", &compra);
    //verificar se o valor inserido é válido
    if (compra > 0)
    {
      //requerir novamente infos ao usuário
      printf("Digite o preço de venda da mercadoria: ");
      scanf("%lf",&venda);
      printf("O preço de compra da mercadoria é R$%.2lf e o preço de venda é R$%.2lf. \n",compra, venda);
      printf ("------------------------------------------------------------------------\n");
      //calcula valor total das compras e vendas
      acumulador1 = compra + acumulador1;
      acumulador2 = venda + acumulador2;
    } 
  }
  //se compra é menor q zero, encerra o loop, calcula os lucrose imprime resultados
  if (compra <= 0)
  {
    lucro = acumulador2 - acumulador1;
    lucropct = ((lucro/acumulador2)*100);
    printf("------------------------------------------------------------------------\n");
  }
  if (lucropct < 10)
  {
    printf("Lucro < 10%% \n");
  }
  else if ( ( lucropct >= 10 ) && ( lucropct <= 20 ) ) 
  {
    printf("10%% <= lucro <= 20%% \n");
  }
  else if (lucro > 20)
  {
  printf("Lucro > 20%% \n");
  }
  printf("O valor total de compra é de R$%.2lf, o valor total de venda é de R$%.2lf e o lucro total é R$%.2lf.\n", acumulador1,acumulador2, lucro);
  //encerra o programa
  printf("Fim do programa. ");
  return 0;
}
