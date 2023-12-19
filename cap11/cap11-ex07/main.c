/*
 * Faça uma função que retorne o ponteiro
 * para um vetor de N elementos inteiros alocados dinamicamente.
 * O array deve ser preenchido com valores de 0 a N − 1.
 */

#include <stdio.h>
#include <stdlib.h>

int * get_ptr(int n){
  int *p;
  
  p = (int *) malloc(n * sizeof(int));
  
  if(p == NULL){
    printf("error: insufficient memory!\n");
    exit(1);
  }

  for(int i = 0; i < n; i++){
    p[i] = i;
  }

  return p;
}

int main(void)
{
  int n;
  int *p;

  printf("Enter an integer: ");
  scanf("%d", &n);

  p = get_ptr(n);
  
  printf("\nValues in the array:\n");
  for(int i = 0; i < n; i++){
    printf("%d ", p[i]);
  }

  printf("\n");
  
  free(p);

  p = NULL;

  return EXIT_SUCCESS;
}
