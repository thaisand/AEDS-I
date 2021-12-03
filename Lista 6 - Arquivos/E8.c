/*
  Autora: Thais Andreatta
  Data: 01/11
  Exercício 8 - Crie um programa que leia a quantidade de veículos que uma locadora de veículos possui e 
o valor que ela cobra por cada aluguel, mostrando as informações pedidas a seguir: 
 
• Sabendo-se que um terço dos veículos são alugados por mês, exiba o faturamento anual 
da locadora 
• Quando o cliente atrasa a entrega, é cobrada uma multa de 20% sobre o valor do aluguel. 
Sabendo que um décimo dos veículos alugados no mês é devolvido com atraso, calcule 
o valor ganho com multas no mês 
• Sabe-se ainda que 2% dos veículos precisam de manutenção ao longo do ano. Calcule o 
valor  gasto  com  a  manutenção  anual,  sabendo  que  o  valor  gasto  em  média  com  a 
manutenção é de R$ 600,00. 
 
Além de mostrar os resultados na tela, grave em  um arquivo  chamado resultado.txt. Cada 
valor deverá ser armazenado em uma linha. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calculafaturamento (double veiculos, double aluguel, double *faturamento)
{
    double calcfaturamento;
    calcfaturamento = (((veiculos*aluguel)/3)*12); //calcula valor da faturamento
    *faturamento = calcfaturamento; //insere esse valor no endereço de memória de faturamento
    return 0;
}

double calculamultas (double veiculos, double aluguel, double *multas)
{
    double calcmultas;
    calcmultas = ((aluguel/5)*((veiculos/3)/10)); //calcula valor da multas
    *multas = calcmultas; //insere esse valor no endereço de memória de multas
    return 0;
}

double calculamanutencao (double veiculos, double *manutencao)
{
    double calcmanutencao; 
    calcmanutencao = (((veiculos/50)*600)*12); //calcula valor da manutenção
    *manutencao = calcmanutencao; //insere esse valor no endereço de memória de manutenção
    return 0;
}

int main () //inicia o programa
{ 
    double veiculos, aluguel; //cria variáveis
    double faturamento = 0;
    double multas = 0;
    double manutencao = 0;
    printf("Digite a quantidade de veículos da locadora: "); //requere informações ao usuário
    scanf("%lf", &veiculos);
    printf("Digite o valor do aluguel de cada veículo: ");
    scanf("%lf", &aluguel);
    calculafaturamento(veiculos, aluguel, &faturamento); //chama função calculafaturamento
    calculamultas(veiculos, aluguel, &multas); //chama função calculamultas
    calculamanutencao(veiculos, &manutencao); //chama função calculamanutencao
    printf("O faturamento anual da locadora é de R$%.2lf\n", faturamento); //exibe resultados
    printf("O valor mensal gasto com multas é de R$%.2lf\n", multas);
    printf("O valor anual gasto com manutenção é de R$%.2lf\n", manutencao);
    FILE *arquivo; //cria variável ponteiro para arquivo
    arquivo = fopen("resultado.txt", "w"); //abre arquivo com função escrever ao final
    fprintf(arquivo, "%.2lf\n", faturamento); //salva informações no arquivo
    fprintf(arquivo, "%.2lf\n", multas);
    fprintf(arquivo, "%.2lf", manutencao);
    fclose(arquivo); //fecha o arquivo 
    return 0; //encerra o programa
}    