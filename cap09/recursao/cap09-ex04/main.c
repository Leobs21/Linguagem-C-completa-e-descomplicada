/* 
 * Crie uma função recursiva que receba um número inteiro N e
 * imprima todos os números naturais de 0 até N em ordem decrescente.
 */

#include <stdio.h>
#include <stdlib.h>

void print_order_descending(int n)
{
  if (n == 0){
    printf("0 ");
  } else {
    printf("%d ", n);
    print_order_descending(n-1);
  }
}

int main()
{
  int n = 10;

  print_order_descending(n);
  printf("\n");

  return EXIT_SUCCESS;
}
