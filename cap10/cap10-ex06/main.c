/*
 * Crie um programa que contenha um array contendo cinco elementos inteiros.
 * Leia esse array do teclado e imprima o endereço das posições contendo valores pares.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[5];
  int *p;

  p = arr;
  
  for(int i = 0; i < 5; i++){
    printf("Enter a Integer[%d]: ", i);
    scanf("%d", p+i);
  }

  printf("\n");
  
  for(int i = 0; i < 5; i++){
    if(p[i] % 2 == 0){
      printf("Value: %d | Address: %p\n", *(p+i), p+i);    
    }
  }
  
  printf("\n");

  return EXIT_SUCCESS;
}
