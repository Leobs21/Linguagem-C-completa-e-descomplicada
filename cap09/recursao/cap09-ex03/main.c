/*
 *  Crie uma função recursiva que receba um número inteiro N e
 *  imprima todos os números naturais de 0 até N em ordem crescente.
 */

#include <stdio.h>
#include <stdlib.h>

void print_natural_number(int n)
{
  if(n == 0){
    printf("0 "); 
  } else {
    print_natural_number(n-1);
    printf("%d ", n);
  }

}

int main()
{
  int n = 10; 
  print_natural_number(n);
  printf("\n");

  return EXIT_SUCCESS;
}
