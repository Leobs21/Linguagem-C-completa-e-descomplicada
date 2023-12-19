/*
 * Crie um programa que contenha um array de inteiros contendo cinco elementos.
 * Utilizando apenas aritmética de ponteiros,
 * leia esse array do teclado e imprima o dobro de cada valor lido.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[5];
  int *p;

  p = arr;

  for(int i = 0; i < 5; i++){
    printf("Enter an integer [%d]: ", i);
    scanf("%d", p+i);
  }
  
  printf("\nDouble Values: ");
  for(int i = 0; i < 5; i++){
    printf("%d ", p[i] << 1);
  }

  printf("\n");

  return EXIT_SUCCESS;
}


