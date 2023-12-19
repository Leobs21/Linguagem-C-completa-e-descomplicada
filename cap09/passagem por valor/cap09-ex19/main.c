/*
 * Faça uma função que receba como parâmetro o valor de um ângulo em graus e
 * calcule o valor do cosseno desse ângulo usando a sua respectiva série de Taylor:
 *
 *     sin(x) = ∑ (-1)ⁿ x^(2n) / (2n)!
 *     n = 0 to 5 
 *
 * em que x é o valor do ângulo em radianos. Considerar π = 3.1414592 e n variando de 0 até 5.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415;

float fatorial(float n){
  if(n == 0){
    return 1;
  } else{
    float f = 1.0;
    for(int i=2; i <= n; i++)
      f = f * i;
    return f;
  }
}

float series_taylor(float x)
{
  float s = 0;
  int n = 5;

  x = (x) * (PI/180);

  for(int i=0; i < n; i++){
    s += pow((-1), i) * pow(x, 2*i) / fatorial(2*i);
  }

  return s;
}

int main()
{
  float x;
  
  printf("Enter a value for an angle in degrees and find the cosine using the Taylor series!\n");
  printf("Enter a value for an angle in degrees: ");
  scanf("%f", &x);
  
  printf("\n");
  printf("Angle: %.1f\n", x);
  printf("Cosine: %.10f\n", series_taylor(x));

  return EXIT_SUCCESS;
}


