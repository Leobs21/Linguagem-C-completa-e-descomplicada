/*
 * Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada.
 * A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] + B[i].
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* get_arrC(int *a, int *b, int len){
  int *arrC = (int *) malloc(len * sizeof(int));
  
  if(arrC == NULL){
    return NULL;
  } else {
    for(int i = 0; i < len; i++){
      arrC[i] = a[i] + b[i];
    }
  }
  return arrC;
}

int main(void)
{
  int n = 5;
  int arrA[n], arrB[n];
  int *arrC;

  srand(time(NULL));

  for(int i = 0; i < n; i++){
    arrA[i] = rand() % 30 + 1;
    arrB[i] = rand() % 30 + 1;
  }

  arrC = get_arrC(arrA, arrB, n);
  
  if(arrC == NULL){
    printf("Error: Insufficient Memory!\n");
    exit(EXIT_FAILURE);
  }

  printf("arrA: \t\tarrB: \t\tarrC:\n");
  for(int i = 0; i < n; i++){
    printf("%d \t+\t%d\t=\t%d \n", arrA[i], arrB[i], arrC[i]);
  }
 
  printf("\n");

  free(arrC);
  arrC = NULL;

  return EXIT_SUCCESS;
}
