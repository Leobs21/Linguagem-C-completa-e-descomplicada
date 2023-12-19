/*
 * Elabore uma função que receba como parâmetro um valor inteiro n e gere como 
saída n linhas com pontos de exclamação, conforme o exemplo a seguir, em que usamos n = 5:
*       !
*       !!
*       !!!
*       !!!!
*       !!!!!
*/

#include <stdio.h>
#include <stdlib.h>

void print_exclamation(int n)
{
  printf("\n");
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
      printf("!");
    }
    printf("\n");
  } 
}

int main()
{
  int n;

  printf("Enter an integer and generate exclamation marks with the number entered!\n");
  printf("Enter an integer: ");
  scanf("%d", &n);
  
  print_exclamation(n);

  return EXIT_SUCCESS;
}

