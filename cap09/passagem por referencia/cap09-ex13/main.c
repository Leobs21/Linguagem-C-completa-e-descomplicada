/*
 * Crie uma função que receba um vetor de tamanho N e ordene os seus valores.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], int n)
{
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  } 
}

int main()
{
  int arr[10];
  int size_arr = sizeof(arr) / sizeof(arr[0]);
  
  srand(time(NULL));

  for(int i = 0; i < size_arr; i++){
    arr[i] = rand() % 30;
  }

  bubble_sort(arr, size_arr);

  printf("\n");

  for (int i = 0; i < size_arr; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
