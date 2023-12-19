/*
 * Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183, usando a série a seguir:
 *
 *     e = ∑ 1/n! = 1/0! + 2/1! ..1/n!
 *     n = 0 to infinite
 *
 * A função deve ter como parâmetro o número de termos que serão somados, N.
 * Note que quanto maior esse número, mais próxima do valor e estará a resposta.
 */

#include <stdio.h>
#include <stdlib.h>

float fatorial(int n)
{
  if(n == 0){
    return 1;
  } else {
    float f = 1;
    for(int i=2; i <= n; i++)
      f = f * i;
    return f;
  }
}

float neperiano(int n)
{
  float e = 0;

  for(int i = 0; i <= n; i++){
    e += 1/fatorial(i);
  }
  return e;
}

int main()
{
  int n;
   
  printf("Return the Neperian number e, e = 2.71828183.\n");
  printf("The higher the value of N, the closer it will be to 'e'!\n");
  printf("Enter the value of N: ");
  scanf("%d", &n);

  printf("\n");
  printf("N = %d\n", n);
  printf("e = %.10f\n", neperiano(n));
  return EXIT_SUCCESS;
}
