/*
 * Escreva uma função que receba como parâmetro um valor N e
 * retorne o ponteiro para uma matriz alocada dinamicamente contendo N linhas e N colunas.
 * Essa matriz deve conter o valor 1 na diagonal principal e 0 nas demais posições.
 */

#include <stdio.h>
#include <stdlib.h>

int ** get_mat(int n)
{
  int nLines = n, nColumn = n;
  int *ptr, **ptr2;
  
  ptr = (int *) calloc(nLines * nColumn, sizeof(int));

  ptr2 = (int **) calloc(nLines , sizeof(int *));
 
  if(ptr == NULL || ptr2 == NULL){
    printf("Error: memory insufficient!\n");
    exit(1);
  }

  for(int i = 0; i < nLines; i++){
    ptr2[i] = ptr + i * nColumn; 
    for(int j = 0; j < nColumn; j++){
      ptr2[i][i] = 1; 
    }
  }

  return ptr2;
}

int main(void)
{
  int n = 3;
  int **ptr2; 
  
  ptr2 = get_mat(n);
  printf("Value in the matrix:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", ptr2[i][j]);
    }
    printf("\n");
  }
  
  free(ptr2[0]);
  free(ptr2);

  ptr2 = NULL;
  
  return EXIT_SUCCESS;
}
