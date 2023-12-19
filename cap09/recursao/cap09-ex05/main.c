/*
 * Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_arr(int len, int arr[])
{
  if(len == 0){
    return 0;
  } else {
    printf("%d ", arr[len-1]);
    return arr[len-1] + sum_arr(len - 1, arr);
  }
}

int main()
{
  int len = 5;
  int arr[len];
  int sum;
  
  srand(time(NULL));

  for(int i = 0; i < len; i++){
    arr[i] = rand() % 50;
  }

  sum = sum_arr(len, arr);

  printf("\nSum: %d\n", sum);

  return EXIT_SUCCESS;
}
