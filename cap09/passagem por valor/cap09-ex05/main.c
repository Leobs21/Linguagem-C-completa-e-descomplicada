/*
 *  Escreva uma função para o cálculo do volume de uma esfera:
 *            V = 4/3π * r3,
 *  em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.
 */
#include <stdio.h>
#include <stdlib.h>

const float PI = 3.141592;

float sphere_volume(float radius)
{
  float volume;
  return volume = 4.0/3.0 * PI * radius * radius * radius;
}

int main()
{
  float radius;
  float volume;

  printf("Enter the radius value of a circle and calculate its volume!\n");
  printf("Enter the radius value: ");
  scanf("%f", &radius);

  volume = sphere_volume(radius);

  printf("Radius of Sphere: %.0f\n", radius);
  printf("Volume of Sphere: %.3f\n", volume);

  
  return EXIT_SUCCESS;
}

