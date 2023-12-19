/*
 * Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
 * Exemplo:
 *  Número lido = 123.
 *  Número retornado = 321.
 */

#include <stdio.h>
#include <stdlib.h>

int invert_alg(int n, int inv[], int *len)
{
  if(n == 0){
    return 0;
  }
  
  int digit = n % 10;

  inv[*len] = digit;

  *len += 1;

  return invert_alg(n / 10, inv, len);
}

int main()
{
  int n = 1050;
  int inv[10]; //cada elemento representa um algarismo, entao cabe ate um numero de 32bit com 10 digitos
  int len = 0;

  invert_alg(n, inv, &len);

  printf("Number: %d\n", n);
  printf("Inverted: ");

  for(int i = 0; i < len; i++){
    printf("%d", inv[i]);
  }
  
  printf("\n");

  return EXIT_SUCCESS;
}
