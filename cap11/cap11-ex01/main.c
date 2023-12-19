/*
 * Escreva um programa que mostre o tamanho em byte
 * que cada tipo de dados ocupa na memória: char, int, float, double
 */

#include <stdio.h> 
#include <stdlib.h> 

struct len{
  char c;
  int i;
  float f;
};

int main(void)
{
  char c = sizeof(char);

  int i = sizeof(int);
  long int li = sizeof(long int);
  long long int lli = sizeof(long long int);
  unsigned int ui = sizeof(unsigned int);
  
  float f = sizeof(float);
  double d = sizeof(double);

  int len = sizeof(struct len);

  printf("char: %d byte\n", c);
  printf("\nint: %d bytes\n", i);
  printf("long int: %ld bytes\n", li);
  printf("long long int: %lld bytes\n", lli);
  printf("unsigned int: %u bytes\n", ui);
  printf("\nfloat: %.0f bytes\n", f);
  printf("double: %.0f bytes\n", d);
  printf("\nstruct char | int | float: %d bytes\n", len);

  return EXIT_SUCCESS;
}
