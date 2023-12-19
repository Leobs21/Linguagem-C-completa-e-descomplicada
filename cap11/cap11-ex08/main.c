/*
 * Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente.
 * Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.
 */

#include <stdio.h>
#include <stdlib.h>

int * get_fill_arr(int n, int *p)
{
  if(n <= 0){
    return NULL;
  } else {
    p = (int *) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
      *(p+i) = i;
    }
  }
  return p;
}

int main(void)
{
  int n;
  int *p;

  printf("Enter an positive or negative integer: ");
  scanf("%d", &n);
  
  p = get_fill_arr(n , p);

  if(p == NULL){
    printf("\nerror: negative or 0 or insuffient memory!\n");
  } else {
    printf("\nValues in the array:\n");
    for(int i = 0; i < n; i++){
      printf("%d ", p[i]);
    }
  }
  printf("\n");

  free(p);

  p = NULL;

  return EXIT_SUCCESS;
}
