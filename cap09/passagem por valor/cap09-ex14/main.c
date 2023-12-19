/*
 * Escreva uma função que receba um número inteiro positivo n.
 * Calcule e retorne o seu fatorial n!: n! = n * ( – 1) * (n – 2) * ... * 1.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long long int fatorial(int n)
{
  long long int f = 1;

  for (int i = 2; i <= n; i++){
    f = f * i;
  }

  return f; 
}

int main()
{

  int n;

  printf("Enter a integer and calculate the fatorial that integer!\n");
  printf("Enter a integer: ");
  scanf("%d", &n);
  
  printf("\n");
  printf("The Integer: %d\n", n);
  printf("The Fatorial: %lld\n", fatorial(n));

  return EXIT_SUCCESS;
}


