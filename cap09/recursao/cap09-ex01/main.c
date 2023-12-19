/*
 * Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
 *
 *             S = 1³ + 2³ + ... + n³
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum_cube(int n)
{ 
  if (n == 0){
    return 0;
  } else {
    printf("%d³ ", n);
    return n * n * n + sum_cube(n-1);
  }
}

int main()
{
  int s;
  int n = 4;
  
  printf("\n");
  s = sum_cube(n); 

  printf("\nThe sum of the cubes up to N³: %d\n", s);

  return EXIT_SUCCESS;
}
