/*
 * Faça um programa que leia um valor inteiro N não negativo.
 * Se o valor de N for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
 * Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
 * deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, n1;

  do {
    printf("Enter a positive number, array size: ");
    scanf("%d", &n);

    if(n <= 0){
      printf("\nPlease, enter a positive number!\n\n");
    }
  } while (n <= 0);

  int *p;

  p = (int *) malloc(n * sizeof(int)); 

  if(p == NULL){
    printf("error: insufficient memory!\n");   
  }
  
  for(int i = 0; i < n; i++){
    do{
      printf("Enter an integer[%d]: ", i);
      scanf("%d", &n1);

      if(n1 < 2){
        printf("\nerror: enter an integer greater than or equal to 2!\n\n");
      }

    } while(n1 < 2);

    p[i] = n1;
  }
  
  printf("\nValues in the array:\n");
  for(int i = 0; i < n; i ++){
    printf("%d ", p[i]);
  }

  printf("\n");

  free(p);

  p = NULL;
  
  return EXIT_SUCCESS;
}
