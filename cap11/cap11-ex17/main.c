/*
 * Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas.
 * A função deve retornar o ponteiro para um vetor B de tamanho N alocado dinamicamente,
 * em que cada posição de B é a soma dos números daquela coluna da matriz.
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* get_arrB(int **matA)
{
  /*
   * o codigo a seguir é apenas pra fins de estudo, uma tentativa de conseguir o tamanho da matriz
   * sem passar uma variavel por parametro na funcao e cheguei nessa conclusao abaixo.
   * foi um desafio dahora, hj foi produtivo!
   */
  int matSize = 0;
  int **initialPos = &matA[0]; //referencia da posição inicial da matriz
  size_t sizeType = sizeof(int); //size_t é usado pra guarda valores em bytes

  //tentativa de conseguir o tamanho de cada linha da matriz
  while(*matA != NULL){
    matSize += sizeType / sizeType; // soma o tamanho em bytes dividido por tamanho do tipo
    matA++; //avança a posição da matriz, no caso seria a linha, depois que finaliza não retorna pra posicao inicial
  }
  printf("\nmatSize: %d\n\n", matSize); 

  matA = initialPos; // seta a posição inicial da matriz que foi guardado antes

  int *arrB = (int *) malloc(matSize * sizeof(int));
  if(arrB == NULL){ 
    printf("error: insufficient memory\n");
    return NULL;
  } else {
    for(int i = 0; i < matSize; i++){
      for(int j = 0; j < matSize; j++){
        arrB[i] += matA[j][i];
      }
    } 
  }

  return arrB;
}

int main(void)
{
  int n = 5;
  int nLines = n;
  int nColumns = n;

  int *arrB;
  int *ptr = (int *) malloc((nLines + 1) * nColumns * sizeof(int));
  int **matA = (int **) malloc((nLines + 1) * sizeof(int **));
  
  if(ptr == NULL || matA == NULL){
    printf("error: insufficient memory!\n");
    exit(EXIT_FAILURE);
  } else {

    srand(time(NULL));
    
    printf("Matrix:\n");
    for(int i = 0; i < nLines; i++){
      matA[i] = ptr + i * nColumns;
      for(int j = 0; j < nColumns; j++){
        matA[i][j] = rand() % 30 + 1;
        if(matA[i][j] <= 9){
          printf(" %d ", matA[i][j]);
        } else {
          printf("%d ", matA[i][j]);
        }
      }
      printf("\n");
    }
    
    arrB = get_arrB(matA);
    
    printf("Values in the arrB:\n");
    for(int i = 0; i < nLines; i++){
      printf("%d ", arrB[i]);
    }
    printf("\n");
    
    free(matA);
    free(arrB);

    matA = NULL;
    arrB = NULL;
  }
  return EXIT_SUCCESS;
}
