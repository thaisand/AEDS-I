/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 10 - Leia a velocidade máxima permitida em uma avenida e a  velocidade com que o motorista 
estava  dirigindo  nela.  Se  o  motorista  estiver  dentro  do  limite  de  velocidade,  imprima  a 
mensagem  “Motorista  respeitou  a  lei”.  Se  o  motorista  tiver  ultrapassado  a  velocidade 
máxima  permitida,  calcule  e  imprima  o  valor  da  multa  a  ser  cobrada,  sabendo  que  os 
valores a serem cobrados são os seguintes: 
• 50 reais se o motorista ultrapassar  em até 10km/h a velocidade permitida (ex: se a 
velocidade máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h); 
• 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida; 
• 200 reais, se estiver acima de 30km/h da velocidade permitida. 
*/

// incluir bibliotecas
#include <stdio.h>
//criar função main que retorna vazio
int main(void)
{
  //declarar variáveis
  int vel_maxima, vel_motorista;
  float multa;
  //requerir dados ao usuário
  printf("Digite a velocidade máxima permitida na Avenida: \n");
  scanf("%d", &vel_maxima);
  printf("Digite a velocidade com que o motorista estava dirigindo na Avenida:\n");
  scanf("%d", &vel_motorista);
  //imprimir resultado de acordo com as condições pré-estabelecidas
  if (vel_motorista <= vel_maxima)
  {
    printf("Motorista respeitou a lei.\n");
  }
  else
  {
    if (((vel_motorista - vel_maxima) > 10) && ((vel_motorista - vel_maxima) <= 30))
    {
      multa = (100.00);
      printf("O valor da multa a ser cobrada é de R$%.2f", multa);
    }
    else if ((vel_maxima - vel_motorista) <= 10)
    {
      multa = (50.00);
      printf("O valor da multa a ser cobrada é de R$%.2f", multa);
    }
    else if ((vel_maxima - vel_motorista) > 30)
    {
      multa = (200.00);
      printf("O valor da multa a ser cobrada é de R$%.2f", multa);
    }
  }
  //encerrar o programa
  printf("Fim do programa.");
  return 0;
}