/*
 * Escreva uma função recursiva que receba um valor inteiro em base decimal e o imprima em base binária.
 */

#include <stdio.h>
#include <stdlib.h>

int dec_to_bin(int n)
{

  if(n == 0){
    return 0;
  } 
  
  int last_digit = n % 2;
 
  int div = dec_to_bin(n / 2);

  return div * 10 + last_digit;
}

int main()
{
  int n = 123;
  int b;

  b = dec_to_bin(n);

  printf("Decimal: %d\n", n);
  printf("Binary: %d\n", b);

  return EXIT_SUCCESS;
}
