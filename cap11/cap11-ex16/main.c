/*
 * Escreva uma função que receba como parâmetro uma matriz A
 * contendo N linhas e N colunas, e um vetor B de tamanho N.
 * A função deve retornar o ponteiro para um vetor C de tamanho N
 * alocado dinamicamente, em que C é o produto da matriz A pelo vetor B.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * get_arrC(int *matA, int arrB[], int n)
{
  int *arrC = (int *) malloc(n * sizeof(int));

  if(arrC == NULL){
    return NULL;
  } else {
    for(int i = 0; i < n; i++){
      arrC[i] = 0;

      int *currentLine = matA + i * n; //atualiza posição inicial da matriz
      /*
       * opitei por multiplicar cada posição da matriz por arrB, desse jeito
       * uma linha inteira da matriz sera multiplicada e adicionada na posição atual da arrC!
       */
      for(int j = 0; j < n; j++){
        arrC[i] += currentLine[j] * arrB[i];
      }
    }
  }
  return arrC;
}

int main(void)
{
  int n = 5;
  int arrB[n];

  int nLines = n, nColumn = n;
  int matA[nLines][nColumn];
  
  int *arrC;
  
  srand(time(NULL));
  for(int i = 0; i < n; i++){
    arrB[i] = rand() % 30 + 1;
    for(int j = 0; j < n; j++){
      matA[i][j] = rand() % 30 + 1;
    }
  }

  arrC = get_arrC(&matA[0][0], arrB, n);
 
  if(arrC == NULL){
    printf("error: insufficient memory!\n");
    exit(EXIT_FAILURE);
  } else {

    printf("Values in the matA:\n");
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if(matA[i][j] <= 9){
          printf(" %d ", matA[i][j]);
        } else {
          printf("%d ", matA[i][j]);
        }
      }
      printf("\n");
    }

    printf("\nValues in the arrB:\n");
    for(int i = 0; i < n; i++){
      printf("%d ", arrB[i]);
    }

    printf("\n\narrC[i] = sum(matA[i][j]) * arrB[j]\n");
    printf("Value in the arrC:\n");
    for(int i = 0; i < n; i++){
      printf("%d ", arrC[i]);
    }
  }
  printf("\n");

  free(arrC);
  arrC = NULL;

  return EXIT_SUCCESS;
}
