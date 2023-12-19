/*
 * Escreva um programa que contenha duas variáveis inteiras.
 * Leia essas variáveis do teclado.
 * Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y;
  int *p1, *p2;

  p1 = &x;
  p2 = &y;

  printf("Enter the value to x: ");
  scanf("%d", p1);

  printf("Enter the value to y: ");
  scanf("%d", p2);
 
  printf("x = %d adress: %p\n", *p1, p1);
  printf("y = %d adress: %p\n", *p2, p2);
  printf("\n");

  if(p1 > p2){
    printf("Adress: %p\n", p1);
    printf("Value: x = %d\n", *p1);
  } else {
    printf("Adress: %p\n", p2);
    printf("Value: y = %d\n", *p2);
  }

  return EXIT_SUCCESS;
}
