/*
 * Escreva um programa que leia um inteiro N e
 * crie uma matriz alocada dinamicamente contendo N linhas e N colunas.
 * Essa matriz deve conter o valor 0 na diagonal principal,
 * o valor 1 nos elementos acima da diagonal principal e o valor −1 nos elementos abaixo da diagonal principal.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n = 5;
  int nLines = n;
  int nColumn = n;

  int *ptr = (int *) calloc(nLines * nColumn, sizeof(int));
  int **matrix = (int **) calloc(nLines, sizeof(int **));

  if(ptr == NULL || matrix == NULL){
    printf("Error: Insufficient memory!\n");
    exit(EXIT_FAILURE);
  } else {
    for(int i = 0; i < nLines; i++){
      matrix[i] = ptr + i * nColumn;
      for(int j = 0; j < nColumn; j++){
        if(j < i){
          matrix[i][j] = -1;
        } else if(j > i){
          matrix[i][j] = 1;
        }
      }
    }
    printf("Values in the matrix:\n"); 
    for(int i = 0; i < nLines; i++){
      for(int j = 0; j < nColumn; j++){
        if(matrix[i][j] == -1){
          printf("%d ", matrix[i][j]);
        } else {
          printf(" %d ", matrix[i][j]);
        }
      }
      printf("\n");
    }
  }
  free(ptr);
  free(matrix);
  ptr = NULL;
  matrix = NULL;
  return EXIT_SUCCESS;
}
