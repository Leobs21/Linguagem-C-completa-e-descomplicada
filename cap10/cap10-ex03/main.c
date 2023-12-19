/*
 * Crie um programa que contenha um array de float contendo 10 elementos.
 * Imprima o endereço de cada posição desse array.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  float arr[10];
  float *p;
  
  p = arr;
  
  srand(time(NULL));

  for(int i = 0; i < 10; i++){
    *(p + i) = (float)rand() / RAND_MAX * 30.0;
    printf("Value: %.2f | address: %p\n", *(p + i), p + i);
  }

  printf("\n");
  return EXIT_SUCCESS;
}
