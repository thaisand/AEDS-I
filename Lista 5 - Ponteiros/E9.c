/*
  Autora: Thais Andreatta
  Data: 22/10
  Exercício 9 - Implemente um procedimento que calcule o comprimento e a área de uma circunferência de 
raio R. Esse procedimento deve obedecer ao cabeçalho a seguir:  
 
void calcCircunferencia (float R, float *compr, float *area) 
 
A área da superfície e o volume são calculados pelas equações:  
 
C=2*PI*R        e     A =PI*R2 
 
No programa principal faça a leitura do raio, acione o procedimento e exiba os resultados do 
comprimento e área calculados por ele. 
*/

#include <stdio.h>

void calcCircunferencia (float R, float *compr, float *area) {
  float pi = 3.14159;
  *compr = (2*pi*R);
  *area = (pi*(R*R)); 
}

int main(void) {
  float raio, compr, area;
  compr = 0;
  area = 0; 
  printf("Digite o valor do raio da circunferência: ");
  scanf("%f", &raio);
  calcCircunferencia(raio, &compr, &area);
  printf("O comprimento do é igual a %.2lf e a área é %.2lf", compr, area);
}