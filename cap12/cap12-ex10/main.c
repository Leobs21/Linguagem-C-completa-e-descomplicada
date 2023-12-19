/*
 * Um arquivo texto possui uma matriz de valores inteiros dentro dele.
 * Os dois primeiros números são as dimensões da matriz (linhas e colunas), enquanto o restante dos números são os valores de cada elemento da matriz.
 * Escreva uma função que receba o nome do arquivo e retorne o ponteiro para uma matriz alocada dinamicamente contendo os valores lidos do arquivo. 
 */

#include <stdio.h>
#include <stdlib.h>

void matrix_from_file(FILE* file)
{
  int row, column;
  fscanf(file, "row: %d | column: %d", &row, &column);

  int **mat = (int **) malloc(column * sizeof(int **));

  if(mat == NULL){
    printf("error: insufficient memory!\n");
    exit(EXIT_FAILURE);
  }
  
  int *ptr = (int *) malloc(row * column * sizeof(int *));

  for(int i = 0; i < row; i++){
    mat[i] = ptr + i * column;
    for(int j = 0; j < column; j++){
      fscanf(file, "%d", &mat[i][j]);
    }
  }
  
  printf("Matrix copied from file:\n");
  for(int i = 0; i < row; i++){
    for(int j = 0; j < column; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  free(mat);
}


int main(void)
{
  FILE* file;

  file = fopen("matrix.txt", "r");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }

  matrix_from_file(file);

  fclose(file);

  return EXIT_SUCCESS;
}
