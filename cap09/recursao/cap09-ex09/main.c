/*
 * Escreva uma função recursiva que receba um número inteiro positivo n.
 * Calcule e retorne o seu fatorial n!:
 *
 * n! = n * (n – 1) * (n – 2) * ... * 1
 *
 */

#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int n)
{
  if(n == 0 || n == 1){
    return 1;   
  } else {
    return n * fatorial(n-1);
  }
}

int main()
{
  int n = 10;
  long long int f;

  f = fatorial(n);

  printf("\n");
  printf("Number: %d!\n", n);
  printf("Fatorial: %lld\n", f);

  return EXIT_SUCCESS;
}
