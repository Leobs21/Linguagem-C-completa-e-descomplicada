/*
 * Escreva uma função para o cálculo do volume e área de uma esfera
                V = 4/3 π + r(elevado a 3)
                A = 4 π * r(elevado a 2)
 * em que π = 3.1414592. O valor do raio r deve ser passado por parâmetro,
 * e os valores calculados devem ser retornados por referência.
 */

#include <stdio.h>
#include <stdlib.h>

const float PI = 3.1414592;

void calc_sphere(float r, float *v, float *a)
{
  *v = (4.0/3.0) * PI * r * r * r;
  *a = 4.0 * PI * r * r;
}

int main()
{
  float r = 2.0;
  float v, a;

  calc_sphere(r, &v, &a);

  printf("Area = %f\n", a);
  printf("Volume = %f\n", v);

  return EXIT_SUCCESS;
}

