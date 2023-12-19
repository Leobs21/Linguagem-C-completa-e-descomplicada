/*
 * Escreva uma função que, dado um número real passado como parâmetro,
 * retorne a parte inteira e a parte fracionária desse número por referência.
 */

#include <stdio.h>
#include <stdlib.h>

float split(float *n)
{
  float f = *n - (int)*n;
  *n = *n - f;
  return f;
}

int main()
{
  float n = 3.1415; 
  float f; 
   
  printf("Real Number: %.4f\n", n);

  f = split(&n);

  printf("Entire Part: %.4f\n", n);
  
  printf("Fractional Part: %.4f\n", f);
   
  return EXIT_SUCCESS;
}
