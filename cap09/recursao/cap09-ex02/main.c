/*
 * Crie uma função recursiva que receba um número inteiro N e retorne o somatório dos números de 1 a N.
 */

#include <stdio.h>
#include <stdlib.h>

int sum_n(int n)
{
  if (n == 0){
    return 0;
  } else {
    return n + sum_n(n-1);
  }
}

int main()
{
  int n = 10;
  int s;

  s = sum_n(n);

  printf("The sum of 1 to N = %d\n", s);

  return EXIT_SUCCESS;
}
