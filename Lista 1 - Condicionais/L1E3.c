/* 
  Autora: Thais Andreatta
  Data: 06/09
  Exercício 3 - Faça  um  algoritmo  que  leia  o  ano  de  nascimento  de  uma  pessoa  e  calcule  sua  idade, 
  considerando  o  ano  atual.  Para  verificar  se  já  fez  aniversário  no  ano  atual  pergunte  se  a 
  pessoa  já  fez  aniversário,  sendo  que  ela  pode  entrar  com  a  informação  "S"(sim)  ou  "N" (não).  
  Com  isto  é  possível  se  ter  maior  precisão  sobre  a  idade.  Verifique  também  se  a 
  pessoa já tem idade para conseguir Carteira de Habilitação (18 anos ou mais) e imprima a 
  mensagem referente a esta checagem. Imprima a idade da pessoa.
*/

//incluir bibliotecas
#include<stdio.h>
//iniciar funçao que nao retorna nada
int main(void) {
//criar variáveis
  int ano_nasc, ano_atual, idade;
  char fezaniversario = 's';
//requerir variaveis ao usuário
  printf("Digite o seu ano de nascimento: \n");
  scanf("%d", &ano_nasc);
  printf("Digite o ano atual: \n");
  scanf("%d", &ano_atual);
  printf("Você já fez aniversário esse ano?\n");
  printf("Digite S para sim e N para não.\n");
  scanf("%d", fezaniversario);
//calcular idade
  if (fezaniversario=='S')
  {
    idade = (ano_atual - ano_nasc);
  }
  else if (fezaniversario=='s')
  {
    idade = (ano_atual - ano_nasc);
  }
  else if (fezaniversario=='N')
  {
    idade = ((ano_atual - ano_nasc) - 1);
  }
  else if (fezaniversario=='n')
  {
    idade = ((ano_atual - ano_nasc) - 1);
  }
  else
  {
    printf("Comando inválido.\n");
  }
//checar se pode tirar CNH e imprimir idade e se pode tirar CNH
  if (idade>=18)
  {
   printf("Sua idade é igual a %d anos e você já tem idade para conseguir Carteira de Habilitação.\n", idade); 
  }
  else if (idade<18)
  {
    printf("Sua idade é igual a %d anos e você ainda não tem idade para conseguir Carteira de Habilitação.\n",idade);
}
// finalizar programa
return 0;
}