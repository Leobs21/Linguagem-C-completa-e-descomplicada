/*
 * Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e retorne o volume desse cilindro.
 * O volume de um cilindro circular é calculado por meio da seguinte fórmula:
 *
 *            V = π * raio2 * altura, em que π = 3.1414592
*/

#include <stdio.h>
#include <stdlib.h>

const float PI = 3.141592;

float cylinder_volume(float height, float radius)
{
  float volume;
  return volume = PI * (radius * radius) * height;
}

int main()
{
  float volume;
  float height;
  float radius;
  
  printf("Enter the value of height and radius of a circular cylinder and return the volume of that cylinder!\n"); 

  printf("Enter the value of height: ");
  scanf("%f", &height);

  printf("Enter the value of radius: ");
  scanf("%f", &radius);

  volume = cylinder_volume(height, radius);

  printf("height: %.2f\n", height);
  printf("radius: %.2f\n", radius);
  printf("volume: %.2f\n", volume);

  return EXIT_SUCCESS;
}
