/*
 * Escreva um programa que aloque dinamicamente uma matriz de inteiros.
 * As dimensões da matriz deverão ser lidas do usuário. 
 * Em seguida, escreva uma função que receba um valor e retorne 1,
 * caso o valor esteja na matriz, ou retorne 0, no caso contrário.
 */

#include <stdio.h>
#include <stdlib.h>

int get_verify_number(int n, int **p2, int nLines, int nColumns)
{
  for(int i = 0; i < nLines; i++){
    for(int j = 0; j < nColumns; j++){
      if(n == p2[i][j]){
        return 1;
      }
    }
  }
  return 0; 
}

int main(void)
{
  int *p1, **p2;
  int nLines, nColumns;

  printf("Enter a number to Lines of matriz: ");
  scanf("%d", &nLines);

  printf("Enter a number to Columns of matriz: ");
  scanf("%d", &nColumns);

  p1 = (int *) malloc(nLines * nColumns * sizeof(int));
  p2 = (int **) malloc(nLines * sizeof(int));

  if(p1 == NULL | p2 == NULL){
    printf("error: insufficient memory!\n");
    exit(1);
  }

  for(int i = 0; i < nLines; i++){
    p2[i] = p1 + i * nColumns; 
    for(int j = 0; j < nColumns; j++){
      printf("Enter a integer[%d]: ", j);
      scanf("%d", &p2[i][j]);
    }
  }

  printf("\nValues in the matriz:\n");
  for(int i = 0; i < nLines; i++){
    for(int j = 0; j < nColumns; j++){
      printf("%d ", p2[i][j]);
    }
    printf("\n");
  }

  int n, r;

  printf("\nNow, enter an integer and see if it exists in the matrix: ");
  scanf("%d", &n);

  r = get_verify_number(n, p2, nLines, nColumns);

  if(r == 1){
    printf("\nThe integer %d exist in the matrix!\n", n);
  } else {
    printf("\nThe integer %d does NOT exist in the matrix!\n", n);
  }

  free(p1);
  free(p2);

  p1 = NULL;
  p2 = NULL;

  return EXIT_SUCCESS;
}
