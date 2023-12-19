/*
 * Escreva uma função que receba por parâmetros dois valores inteiros x e y
 * e calcule e retorne o resultado de x(elevado a y)  para o programa principal.
 * Não use nenhuma função pronta para isso.
 */

#include <stdio.h>
#include <stdlib.h>

/*TENTATIVA DE RECURSÃO*/
/* int ref;

long int my_pow(long int x, int y){
  if (y == 1){
    return x;
  } else {
    return my_pow(x * ref, y - 1);
  }
} */

long int my_pow (long int x, int y){
  int ref = x;
  for(int i = y; i > 1; i--){
    x = x * ref;
  }
  return x;
} 

int main(int argc, char *argv[])
{
  int x, y;
  long int result;

  printf("Enter two values. x and y, and use function to return x raised to y!\n");
 
  printf("Enter the value of X: ");
  scanf("%d", &x);

  printf("Enter the value of Y: ");
  scanf("%d", &y);

  result = my_pow(x, y);

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  if(result == 0){
    printf("Returned 0! or too large! or Undefined!\n");
  } else {
    printf("x^y = %ld\n", result);
  }

  return EXIT_SUCCESS;
}
