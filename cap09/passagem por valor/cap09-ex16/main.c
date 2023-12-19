/*
 *  Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos n = 4:
        *
        **
        ***
        ****
        ***
        **
        *
 */

#include <stdio.h>
#include <stdlib.h>

void print_asterisks(int n)
{
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
      printf("*");
    }
    printf("\n");
  } 

 for(int i = n - 1; i >= 1; i--){
    for(int j = 1; j <= i; j++){
      printf("*");
    }
    printf("\n");
  }
}


int main()
{
  int n;

  printf("Enter an integer and generate asterisks according to the interger value!\n");
  printf("Enter an integer: ");
  scanf("%d", &n);

  print_asterisks(n);


  return EXIT_SUCCESS;
}
