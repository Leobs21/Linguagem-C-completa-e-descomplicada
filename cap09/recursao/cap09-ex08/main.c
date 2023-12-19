/*
 * A multiplicação de dois números inteiros pode ser feita através de somas sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2).
 * Crie uma função recursiva que calcule a multiplicação por somas sucessivas de dois inteiros.
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y)
{
  if(y == 0){
    return 0;
  } else {
    return x + sum(x, y-1);
  }
}

int main()
{
  int x = 2;
  int y = 5;
  int r;

  r = sum(x, y);

  printf("x = %d\n", x);
  printf("y = %d\n", y);

  printf("Sum: %d\n", r);

  return EXIT_SUCCESS;
}
