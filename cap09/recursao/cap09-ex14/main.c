/*
 * Crie uma função recursiva que retorne o menor elemento em um vetor.
 */

#include <stdio.h>
#include <stdlib.h>


int smallest_arr(int arr[], int len, int *smallest)
{
  if(len == 0)
  {
    return *smallest;
  }

  if (arr[len] < *smallest){
    *smallest = arr[len];
  }
  
  return smallest_arr(arr, len - 1, smallest);
}


int main()
{
  int arr[5] = {2, 3, 6, 1, 5};

  printf("Array: ");
  int smallest = arr[0];

  int len = sizeof(arr) / sizeof(arr[0]) - 1;
  
  smallest_arr(arr, len, &smallest);
 
  for(int i = 0; i <= len; i++){
    printf("%d ", arr[i]);
  }
  
  printf("\nSmallest: %d\n", smallest);  

  return EXIT_SUCCESS;
}
