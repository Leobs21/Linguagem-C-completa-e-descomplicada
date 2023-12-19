/*
 * Crie uma função que receba dois parâmetros:
 * um vetor e um valor do mesmo tipo do vetor.
 * A função deverá preencher os elementos de vetor com esse valor.
 * Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.
 */

#include <stdio.h>
#include <stdlib.h>

void fill_arr(int arr[], int n)
{
  for(int i = 0; i < 10; i++) {
    *arr = n;
    arr++;
  }
}

int main()
{
  int arr[10];
  int n = 1;

  fill_arr(arr, n);

  for(int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  
  printf("\n");

  return EXIT_SUCCESS;
}
