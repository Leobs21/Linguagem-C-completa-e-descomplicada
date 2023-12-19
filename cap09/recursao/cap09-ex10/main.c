/*
 * Escreva uma função recursiva que receba um número inteiro,
 * maior ou igual a zero, e retorne o enésimo termo da sequência de Fibonacci.
 * Essa sequência começa no termo de ordem zero e, a partir do segundo termo,
 * seu valor é dado pela soma dos dois termos anteriores.
 * Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
 */

#include <stdio.h>
#include <stdlib.h>

long long int fibonacci(int n)
{
  if(n == 1){
    return 0;
  } else if (n == 2){
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main()
{
  int n;
  long long int f;
  
  printf("Enter a value greater than 0: ");
  scanf("%d", &n);

  f = fibonacci(n);

  printf("Term: %lld\n", f);
  return EXIT_SUCCESS;
}
