/*
 * Elabore uma função para verificar se um número é um quadrado perfeito.
 * Um quadrado perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro.
 * Exemplos: 1, 4, 9.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int is_square_perfect(int x)
{
  int value;

  value = sqrtf(x);

  if (value * value == x){
    value = 0;
  } else {
    value = 1;
  }

  return value;
}


int main()
{
  int x, square;
  printf("Enter a number and verify if it is a square perfect number!\n");
  printf("Enter a number: ");
  scanf("%d", &x);

  square = is_square_perfect(x);

  if(square == 0){
    printf("Is square perfect!\n");
  } else {
    printf("Is not square perfect!\n");
  }

  return EXIT_SUCCESS;
}
