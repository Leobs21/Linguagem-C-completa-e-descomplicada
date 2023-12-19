/*
 * Escreva uma função que receba uma matriz e seu tamanho como parâmetros e salve-a em um arquivo texto de nome “matriz.txt”’.
 * Cada linha da matriz deve ser salva em uma linha do arquivo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_mat_from_file(int row, int collumn)
{
  int n;
  FILE* file = fopen("matriz.txt", "r");

  printf("\nFrom File: \n");
  for(int i = 0; i < row; i++){
    for(int j = 0; j < collumn; j++){
      fscanf(file, "%d", &n);
      printf("%d ", n);
    }
    printf("\n");
  }

  fclose(file);
}

void save_mat_to_file(int **mat, int row, int collumn)
{
  FILE* file = fopen("matriz.txt", "w"); 

  for(int i = 0; i < row; i++){
    for(int j = 0; j < collumn; j++){
      fprintf(file, "%d ", mat[i][j]);
    }
    fputc('\n', file);
  }

  fclose(file);
}


int main(void)
{
  int row = 5, collumn = 5;

  int **mat = (int **) malloc(collumn * sizeof(int **));
  int *ptr = (int *) malloc(row * collumn * sizeof(int*));

  srand(time(NULL));

  for(int i = 0; i < row; i++){
    mat[i] = ptr + i * row; 
    for(int j = 0; j < collumn; j++){
      mat[i][j] = rand() % 30 + 1;
    }
  }

  printf("From matrix: \n");
  for(int i = 0; i < row; i++){
    for(int j = 0; j < collumn; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  save_mat_to_file(mat, row, collumn);

  print_mat_from_file(row, collumn);

  free(mat);

  return EXIT_SUCCESS;
}
