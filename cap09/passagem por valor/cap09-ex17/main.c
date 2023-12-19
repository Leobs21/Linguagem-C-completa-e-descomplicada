/*
 * Faça uma função que receba um inteiro N como parâmetro.
 * Calcule e retorne o resultado da seguinte série S:
 *
 *  S = 2/4 + 5/5 + 10/6 .. n^2+1/n+3
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int series_s(int n)
{
  int s = 0;
  for(int i = 1; i <= n; i++){
    s += (i * i + 1) / (i + 3);
  }
  return s;
}

int main()
{
  int n, s;

  printf("Enter an integer and return the result of the series S!\n");
  printf("Enter an integer: ");
  scanf("%d", &n);
  
  s = series_s(n);

  printf("\n");
  printf("N = %d\n", n); 
  printf("S = %d\n", s);

  return EXIT_SUCCESS;
}

