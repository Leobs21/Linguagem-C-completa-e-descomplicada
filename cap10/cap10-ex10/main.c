/*
 * Considere a seguinte declaração: int a,*b,**c,***d.
 * Escreva um programa que leia a variável a e calcule e
 * exiba o dobro, o triplo e o quádruplo desse valor utilizando * apenas os ponteiros b, c e d.
 * O ponteiro b deve ser usado para calcular o dobro, c, o triplo, e d, o quádruplo.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 10;
  int *b = &a;
  int **c = &b;
  int ***d = &c;
  
  printf("Initial: %d\n" , a);
  printf("Double: %d\n" , *b << 1);
  printf("Triple: %d\n" , **c * 3);
  printf("Quadruple: %d\n" , ***d << 2);

  return EXIT_SUCCESS;
}
