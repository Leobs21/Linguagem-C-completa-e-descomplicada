/*
 * Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
 * para uma matriz alocada dinamicamente contendo N linhas e N colunas.
 * Essa matriz deve conter o valor 1 na diagonal secundária e 0 nas demais posições.
 */

#include <stdio.h>
#include <stdlib.h>

int ** get_mat(int n)
{
  int **matrix;
  int *p;
  
  int nLines = n;
  int nColumn = n;

  p = (int *) calloc(nLines * nColumn, sizeof(int));
  matrix = (int **) calloc(nLines, sizeof(int *));
  
  // esse "for" so percorre e preenche com 1s apenas a linha diagonal, o restante ta sendo preenchido pelo calloc!
  // portanto não precisa de outro "for" dentro desse "for" pra percorrer todos os valores!
  // ah não ser se for pra preencher com outro valor diferente de 0s..
  for(int i = nLines - 1; i >= 0; i--){
    static int j = 0;

    matrix[i] = p + i * nColumn;

    matrix[i][j] = 1;
    j++;
  }

  return matrix;
}

int main(void)
{
  int n = 5;
  int **matrix;

  matrix = get_mat(n);

  printf("\nValues in the matrix:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  free(matrix[0]);
  free(matrix);

  matrix = NULL;

  return EXIT_SUCCESS;
}
