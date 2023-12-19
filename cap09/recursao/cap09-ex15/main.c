/*
 * Em matemática, o número harmônico designado por Hn
 * define-se como o enésimo termo da série harmônica.
 * Ou seja:
 *
 * Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
 *
 * Escreva uma função recursiva que calcule o valor de qualquer Hn.
 */

#include <stdio.h>
#include <stdlib.h>


float sum_hn(int n)
{
  static float hn = 0;

  if(n == 0){
    return hn;
  }
  
  hn += 1.0/n;

  return sum_hn(n - 1);
}


int main()
{
  int n = 5;
  float hn;

  hn = sum_hn(n);

  printf("N = %d\n", n);
  printf("Hn = %.2f\n", hn);

  return EXIT_SUCCESS;
}
