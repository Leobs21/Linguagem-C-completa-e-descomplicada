/*
 * Elabore uma função que receba um vetor contendo N valores
 * e retorne por referência o maior e o menor elemento desse vetor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bigger_smaller(int arr[], int count, int *bigger, int *smaller)
{
  
  *smaller = arr[0];

  for(int i = 0; i < 10; i++){
    if(arr[i] > *bigger){
      *bigger = arr[i];
    }

    if(arr[i] < *smaller){
      *smaller = arr[i];
    }
  } 
}

int main()
{
  int arr[10];
  int count = sizeof(arr) / sizeof(arr[0]);
 
  int bigger, smaller;

  srand(time(NULL));

  for(int i = 0; i < count; i++){
    arr[i] = rand() % 50;
    printf("%d ", arr[i]);
  }
   
  bigger_smaller(arr, count, &bigger, &smaller);

  printf("\n");
  printf("Bigger: %d\n", bigger);
  printf("Smaller: %d\n", smaller);

  return EXIT_SUCCESS;
}
