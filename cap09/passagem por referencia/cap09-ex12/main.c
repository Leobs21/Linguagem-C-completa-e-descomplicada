/*
 * Escreva uma função que receba como parâmetro um vetor contendo N valores inteiros. 
 * Essa função deve retornar, por referência, dois valores: a soma dos números pares e ímpares.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int count = 10;

void sum_even_odd(int arr[], int *even, int *odd){
  for (int i = 0; i < count; i++) {
    if (arr[i] % 2 == 0){
      *even += arr[i];
    } else{
      *odd += arr[i];
    } 
  }
}

int main()
{
  srand(time(NULL));

  int arr[count];

  for (int i = 0; i < count; i++) {
    arr[i] = rand() % 50; 
    printf("%d ", arr[i]);
  }

  int sum_even, sum_odd;
  
  sum_even_odd(arr, &sum_even, &sum_odd);

  printf("\n\n");

  printf("Sum Even: %d\n", sum_even);
  printf("Sum Odd: %d\n", sum_odd);

  return EXIT_SUCCESS;
}
