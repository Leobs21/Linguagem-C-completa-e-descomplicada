/*
 * Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y e
 * calcule e retorne o resultado de x^y para o programa principal.
 */

#include <stdio.h>
#include <stdlib.h>

int powwwww(int x, int y)
{
  if(y == 0){
    return 1;
  } else {
    return x * powwwww(x, y - 1);
  }
}

int main()
{
  int x = 5;
  int y = 5;
  int n;
  
  n = powwwww(x , y);

  printf("x = %d\ny = %d", x , y);
  printf("\nx ^ y: %d\n", n);

  return EXIT_SUCCESS;
}
