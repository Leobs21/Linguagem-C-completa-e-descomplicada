/*
 * Elabore uma função que receba por parâmetros os coeficientes de uma equação do segundo grau.
 * Em seguida, calcule e mostre as raízes dessa equação.
 * Lembre-se deque as raízes são calculadas como em que:
 * 
 * ∆ = b2 – 4 * a * c 
 * ax2 + bx + c = 0
 * 
 * representa uma equação do segundo grau.
 *
 * A variável a tem de ser diferente de zero.
 * Caso seja igual, imprima a mensagem “Não é equação de segundo grau” e retorne o valor −1.
 * Do contrário, retorne o número de raízes e as raízes (por referência) se elas existirem:
 *
 * • Se ∆ < 0, não existe real. Número de raízes: 0.
 * • Se ∆ = 0, existe uma raiz real. Número de raízes: 1.
 * • Se ∆ > 0, existem duas raízes reais. Número de raízes: 2
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int segundo_grau (int *delta, int a, int b, int c, float *x1, float *x2)
{ 
  if(a == 0){
    *delta = -2;
    printf("(Error -1) A = 0 Não é equação de segundo grau!\n"); 
    return EXIT_FAILURE;
  }

  *x1 = (-b + sqrtf((b) * b - 4 * a * c)) / (2 * a);
  *x2 = (-b - sqrtf((b) * b - 4 * a * c)) / (2 * a);
  
  if(*x1 > 0 || *x2 > 0){
    *delta += 1;
  } else {
    *delta = -1;
  }

  return EXIT_SUCCESS;
}

int main()
{  
  int delta = 0;
  float x1, x2;
  int a = 1, b = -5, c = 1;

  segundo_grau(&delta, a, b, c, &x1, &x2);
  
  if(a != 0){
    printf("x1 = %.3f\nx2 = %.3f", x1, x2);
    printf("\n");
    
    switch (delta) {
      case 0:
        printf("Existe uma raiz real!\n"); 
        break;
      case 1:
        printf("Existe duas raízes reais!\n");
        break;
      case -1:
        printf("Não existe raiz real!\n");
        break;
    }
  }
   
  return EXIT_SUCCESS;
}
