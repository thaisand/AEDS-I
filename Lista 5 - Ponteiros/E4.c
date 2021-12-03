/*
  Autora: Thais Andreatta
  Data: 22/10
  Exercício 4 - Identifique o erro no programa a seguir, de modo que seja exibido o valor 10 na tela. 
 
#include <stdio.h> 
int main() 
{ 
    int x, *p, **q; 
    p = &x; 
    q = &p; 
    x = 10; 
    printf("\n%d\n", &q); 
    return(0);  
} 
*/

#include <stdio.h> 
int main() 
{ 
    int x, *p, **q; 
    p = &x; 
    q = &p; 
    x = 10; 
    printf("\n%d\n", **q); //o comando precisava requerir o conteúdo da variável q. Ele estava requerindo o seu endereço de memória. 
    return(0);  
} 