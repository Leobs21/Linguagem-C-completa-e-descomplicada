/*
 * Faça uma função recursiva que calcule o valor da série S
 * descrita a seguir para um valor n maior do que zero a ser
 * fornecido como parâmetro para a mesma:
 *
 *  S = 2 + 5/2 + 10/3 + ... + 1 + N²/ N
 *
 */


#include <stdio.h>
#include <stdlib.h>

float serie_s(int n){

  static float s = 0;

  if(n == 0){
    return s;
  }

  s += (1.0 + n * n) / n;

  return serie_s(n - 1);
}

int main()
{
  int n = 5;
  float s;

  s = serie_s(n);

  printf("N = %d\n", n);
  printf("S = %.2f\n", s);

  return EXIT_SUCCESS;
}
