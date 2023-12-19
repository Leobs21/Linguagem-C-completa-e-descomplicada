/*
 * Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a retorne convertida em graus Celsius. 
 * A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include <stdio.h>
#include <stdlib.h>

float convert_to_celsius(float f)
{
  float c;
  c = (f - 32) * 5/9;  
  return c; 
}

int main()
{
  float c, f;
  printf("Enter a temperature number in Fahrenheit and convert it to Celsius!\n");
  printf("Enter a Fahrenheit number: ");
  scanf("%f", &f);

  c = convert_to_celsius(f);

  printf("Fahrenheit: %.1f\n", f);
  printf("Celsius: %.0f\n", c);

  return EXIT_SUCCESS;
}
