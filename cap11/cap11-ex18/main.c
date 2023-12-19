/*
 * Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus tamanhos.
 * A função deve retornar o ponteiro para uma matriz C, em que C é o produto da multiplicação da matriz A pela matriz B.
 * Se a multiplicação das matrizes não for possível, retorne um ponteiro nulo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_matrix(int row, int column, int **mat)
{
  int *ptr = (int *) malloc(row * column * sizeof(int));
 
  if(mat == NULL){
    printf("error: insufficient memory!\n");
    exit(EXIT_FAILURE);
  }
  
  for(int i = 0; i < row; i++){
    mat[i] = ptr + i * column;
    for (int j = 0; j < column; j++) {
      mat[i][j] = rand() % 30 + 1;
    }
  }
}

void print_matrix(int row, int column, int **mat)
{
  for(int i = 0; i < row; i++){
    for (int j = 0; j < column; j++) {
      if(mat[i][j] <= 9){
        printf("  %d ", mat[i][j]);
      } else if(mat[i][j] <= 99) {
        printf(" %d ", mat[i][j]);
      } else {
        printf("%d ", mat[i][j]);
      }
    }
    printf("\n");
  }
}

int** get_matrix_C(int rowA, int rowB, int columnA, int columnB, int **matA, int **matB)
{
  if(rowA != columnB || rowB != columnA){
    return NULL;
  }

  int **matC = (int **) malloc(columnA * sizeof(int **));

  if(matC == NULL){
    printf("error: insufficient memory!\n");
    exit(EXIT_FAILURE);
  }

  for (int i = 0; i < rowA; i++) {
    matC[i] = (int *) malloc(rowA * columnA * sizeof(int));
    for (int j = 0; j < columnA; j++) {
      matC[i][j] = matA[i][j] * matB[i][j];
    }
  }

  return matC;
}

int main(void)
{
  int rowA = 5;
  int rowB = 5;

  int columnA = 5;
  int columnB = 5;

  int **matA = (int **) malloc(columnA * sizeof(int **));
  int **matB = (int **) malloc(columnB * sizeof(int **));

  int **matC;
  
  srand(time(NULL));
  fill_matrix(rowA, columnA, matA);

  printf("\nMatrix A:\n");
  print_matrix(rowA, columnA, matA);

  srand(time(NULL) + 1);  
  fill_matrix(rowB, columnB, matB); 

  printf("\nMatrix B:\n");
  print_matrix(rowB, columnB, matB);
  
  matC = get_matrix_C(rowA, rowB, columnA, columnB, matA, matB);

  if (matC == NULL){
    printf("\nUnable to multply matrices, different size!\n\n");
  } else {
    printf("\nMatrix C:\n");
    print_matrix(rowA, columnA, matC);
  }
  
  free(matA);
  free(matB);
  free(matC);

  matA = NULL;
  matB = NULL;
  matC = NULL;

  return EXIT_SUCCESS;
}
