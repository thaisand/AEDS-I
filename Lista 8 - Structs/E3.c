/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 3 - Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: 
código do cliente, 
e-mail, 
número de horas de acesso, 
página (S-sim ou N-não). 

Elaborar um algoritmo que calcule e mostre um relatório contendo o valor a pagar por cada cliente, sabendo-se que:
as primeiras 20 horas de acesso são R$35,00 e 
as horas que excederam tem o custo de R$2,50 por hora. 
Para os clientes que têm página, adicionar R$40,00. 
Inserir um conjunto de registros (máximo 500). */

#include <stdio.h>
#include <string.h>

typedef struct cadastro
{
  int codigo;
  char email[100];
  int horasAcesso;
  char pagina; 
} cadastro;

void preencheCadastro(cadastro clientes[]) {
  printf("Código: ");
  scanf("%d", &clientes->codigo);
  printf("E-mail: ");
  scanf("%s", clientes->email);
  printf("Quantidade de horas de acesso: ");
  scanf("%d", &clientes->horasAcesso);
  printf("Possui página? Digite S para sim e N para não: ");
  scanf(" %c", &clientes->pagina);
  printf("\n");
}

void relatorio(char S, cadastro clientes[], int quantClientes) {
  double valorAPagar = 0;
  char temPagina; 
  for (int i = 0; i < quantClientes; i++)
  {
    temPagina = clientes[i].pagina;
    if (clientes[i].horasAcesso <= 20 )
    {
      valorAPagar = 35;
    }
    if (clientes[i].horasAcesso > 20)
    {
      valorAPagar = 35 + (clientes[i].horasAcesso - 20)*(2.5);
    }
    if (clientes[i].pagina == 'S' || clientes[i].pagina == 's')
    {
      valorAPagar = valorAPagar + 40;
    }
    printf("O cliente de código %d deve pagar R$%.2lf.\n", clientes[i].codigo, valorAPagar);
  }
}

int main(void) {
  int quantClientes = 0;
  printf("Digite a quantidade de clientes: ");
  scanf("%d", &quantClientes);
  char letraS;
  letraS = 'S';
  cadastro clientes[quantClientes];

  for (int i = 0; i < quantClientes; i++)
  {
    printf("----CLIENTE %d----\n", i+1);
    preencheCadastro(&clientes[i]);
  }

  relatorio(letraS, clientes, quantClientes);

  return 0;
}