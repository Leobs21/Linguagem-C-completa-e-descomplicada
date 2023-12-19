/*
 * Elabore um programa que leia do usuário o tamanho de um vetor a ser lido.
 * Em seguida, faça a alocação dinâmica desse vetor.
 * Por fim, leia o vetor do usuário e o imprima.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n <= 0){
    printf("Enter a valid positive number!\n");
    return EXIT_FAILURE;
  }

  int *p = (int *) malloc(n * sizeof(int));

  if(p == NULL){
    printf("Error: Insufficient Memory!\n");
  }

  for(int i = 0; i < n; i++){
    printf("Enter a integer [%d]: ", i);
    scanf("%d", &p[i]);
  }
  
  printf("\nValues in the Array: \n");
  for(int i = 0; i < n; i++){
    printf("%d ", p[i]);
  }

  printf("\n");

  free(p);

  p = NULL;

  return EXIT_SUCCESS;
}
