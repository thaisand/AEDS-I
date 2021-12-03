/*
    Autora: Thais Andreatta
    Data: 29/11
    Exercício 5 - Escreva um programa para cadastrar dois clientes de uma loja. 
    As informações necessárias são: nome, endereço e telefone. Deve ser usada uma estrutura de registro 
    para a construção deste cadastro. 
*/

#include <stdio.h>

typedef struct cadastro {
  char nome[200];
  char endereco[200];
  int telefone;
} cadastro;

void preencheCadastro (cadastro cliente[]) {
  printf("\n------Preenchendo cadastro do cliente------");
  printf("\nDigite o nome do cliente: ");
  scanf(" %[^\n]", cliente->nome);
  printf("Digite o endereço do cliente: ");
  scanf(" %[^\n]", cliente->endereco);
  printf("Digite o telefone do cliente: ");
  scanf("%d", &cliente->telefone);
}


int main(void) {
  cadastro cliente[2];
  for (int i = 0; i < 2; i++)
  {
    preencheCadastro(cliente);
  }
  
  return 0;
}