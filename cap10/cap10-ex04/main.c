/*
 * Crie um programa que contenha uma matriz de float contendo três linhas e três colunas.
 * Imprima o endereço de cada posição dessa matriz.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  float mat[3][3];
  float *p;

  p = mat[0];

  srand(time(NULL));

  for(int i = 0; i < 9; i++){
    *(p + i) = (float)rand() / RAND_MAX * 30;
    printf("Value: %.2f | Address: %p\n", *(p + i), p + i);
  }
  printf("\n");

  return EXIT_SUCCESS;
}

