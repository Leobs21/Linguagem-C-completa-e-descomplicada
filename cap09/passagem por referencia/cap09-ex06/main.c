/*
 * Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas.
 * Calcule na própria matriz A a sua transposta
 * (se B é a matriz transposta de A, então A[i][j] = B[j][i]).
 */

#include <stdio.h>
#include <stdlib.h>


/*
   1 6 11 16 21 
   2 7 12 17 22 
   3 8 13 18 23 
   4 9 14 19 24 
   5 10 15 20 25 
 */

void tranposta(int arr_A[][5])
{
  int arr_B[5][5];

   for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){ 
      arr_B[i][j] = arr_A[i][j];
    }
  }  
  
  for(int i=0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      arr_A[i][j] = arr_B[j][i];
    }
  } 
}

int main()
{
  int arr_A[5][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}
  };
   
  tranposta(arr_A);

  for(int i=0; i < 5; i++){
    for(int j=0; j < 5; j++){
      printf("%d ", arr_A[i][j]);
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
