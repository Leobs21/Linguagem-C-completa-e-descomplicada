/*
 * Escreva um programa que contenha duas variáveis inteiras.
 * Compare seus endereços e exiba o maior endereço. 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p1, *p2, x, y;
  
  p1 = &x;
  p2 = &y;

  printf("p1: %p\n", p1);
  printf("p2: %p\n", p2);
  printf("\n");

  if(p1 > p2){
    printf("Biggest: p1 = %p\n", p1);
  } else {
    printf("Biggest: p2 = %p\n", p2);
  }

  return EXIT_SUCCESS;
}
