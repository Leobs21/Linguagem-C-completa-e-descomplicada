#include <stdio.h>
#include <stdlib.h>

/* Escreva uma função que receba por parâmetro dois números e retorne o maior deles.*/

int bigger(int x, int y)
{
  int z;
  if (x > y) {
    z = x;
  } else if (y > x) {
    z = y;
  } else {
    return printf("Equals Numbers!\n");
  }

  return printf("The Biggest = %d\n", z);
}

int main()
{
  int x, y;

  printf("Type two numbers and see which is bigger!\n");

  printf("Enter the first number: ");
  scanf("%d", &x);

  printf("Enter the second number: ");
  scanf("%d", &y);

  bigger(x, y);

  return EXIT_SUCCESS;
}
