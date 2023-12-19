/*
 * Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas
 * e retorne a soma dos seus elementos.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count = 10;

int mat_sum(int arr[][10])
{
  int sum = 0;
  
  for(int i=0; i < count; i++){
    for(int j=0; j < count; j++){
      sum += arr[i][j];
    }
  }

  return sum;
}

int main()
{
  srand(time(NULL));

  int sum;
  int mat[count][count];

  for(int i = 0; i < count; i++){
    for(int j = 0; j < count; j++){
      mat[i][j] = (rand() % 100) + 1;  
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  
  printf("\n");

  sum = mat_sum(mat);

  printf("Adding the elements of the Matrix = %d\n", sum); 

  return EXIT_SUCCESS;
}
