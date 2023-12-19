/*
 * Faça uma função que receba, por parâmetro, uma matriz A contendo seis linhas e seis colunas.
 * Essa função deve retornar, por referência,
 * a soma dos elementos da sua diagonal principal e da sua diagonal secundária. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count = 6;

void mat_diagonal_sum(int mat[][count], int *pd, int *sd)
{
  int j = count - 1;

  for(int i = 0; i < count; i++){
    *pd += mat[i][i];
    *sd += mat[i][j];
    j--;
  } 
}

int main()
{
  int sumPD = 0; // principal diagonal
  int sumSD = 0; // secondary diagonal
  
  int mat[count][count];

  srand(time(NULL));
  
  printf("-- MATRIX --\n");

  for(int i = 0; i < count; i++){
    for(int j = 0; j < count; j++){
      mat[i][j] = (rand() % 50) + 1;
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  
  printf("\n");

  printf("BEFORE: Principal Diagonal =  %d\n", sumPD);
  printf("BEFORE: Secondary Diagonal =  %d\n", sumSD);

  printf("\n");

  mat_diagonal_sum(mat, &sumPD, &sumSD);
  
  printf("AFTER: Principal diagonal = %d\n", sumPD);
  printf("AFTER: Secondary diagonal = %d\n", sumSD);

  printf("\n");

  return EXIT_SUCCESS;
}

