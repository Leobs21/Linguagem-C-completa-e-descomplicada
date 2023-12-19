/*
 * Elabore uma função que receba um vetor contendo N valores e 
 * retorne por referência o maior elemento do vetor e
 * o número de vezes que esse elemento ocorreu no vetor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bigger_and_equals(int arr[], int count, int *bigger, int *equal)
{
  *equal = 0;

  for(int i = 0; i < count; i ++){
    if(arr[i] > *bigger){
      *bigger = arr[i];
    }
  }

  for(int i = 0; i < count; i++){
    if(arr[i] == *bigger){
      *equal += 1;
    }
  }
}

int main()
{
  int arr[10];
  int bigger, equal;
  int count = sizeof(arr) / sizeof(arr[0]);

  srand(time(NULL));

  for (int i = 0; i < count; i++) {
    arr[i] = rand() % 10;
    printf("%d ", arr[i]);
  }
  
  bigger_and_equals(arr, count, &bigger, &equal);  

  printf("\n\n");
  printf("Bigger: %d\n", bigger);
  printf("Equals: %d\n", equal);

  return EXIT_SUCCESS;
}
