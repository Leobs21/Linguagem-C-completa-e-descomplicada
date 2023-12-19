/*
 * Escreva uma função que receba um array de 10 elementos e retorne a sua soma.
 */

#include <stdio.h>
#include <stdlib.h>

int count_arr(int n[])
{
  int s = 0;
  for(int i=0; i < 10; i++){
    s += n[i];
  }
  return s;
}

int main()
{
  int arr[10], s;
  
  for(int i=0; i < 10; i++){
    arr[i] = i+1;
    printf("%d\n",arr[i]);
  }
  
  s = count_arr(arr);
  
  printf("The sum of the array elements: %d\n", s);

  return EXIT_SUCCESS;
}
