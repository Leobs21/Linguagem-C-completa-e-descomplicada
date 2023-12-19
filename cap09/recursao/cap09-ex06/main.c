/*
 *  Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float average_arr(int len, int arr[])
{
  static float sum, len_average;

  if(len == 0){
    return sum / len_average;
  } else {
    sum += arr[len - 1];
    len_average += 1;
    return average_arr(len - 1, arr);
  }
}

int main()
{
  int len = 10;
  int arr[len];
  float average;
  
  srand(time(NULL));

  for(int i = 0; i < len; i++){
    arr[i] = rand() % 50;
    printf("%d ", arr[i]);
  }

  average = average_arr(len, arr);
  
  printf("\nAverage: %.2f\n", average);

  return EXIT_SUCCESS;
}
