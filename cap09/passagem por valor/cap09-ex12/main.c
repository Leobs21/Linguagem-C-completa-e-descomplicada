/*
 * Escreva uma função que receba um número inteiro positivo e retorne o maior fator primo desse número.
 */

#include <stdio.h>
#include <stdlib.h>

int greatest_prime(int n)
{
  int count = 0;
  int prime = 2;

  while (count <= n) { 
    for(int i = 2; i <= n; i++){
      if(n % i == 0){
        prime = n;
        n = n / i;
        break;
      }
    } 
    
    count++;
  }
  return prime;
}

int main()
{
  int n;
  int prime;
  
  printf("Enter an integer and return the largest prime factor of that number!\n");
  printf("Enter an integer number: ");
  scanf("%d", &n);

  prime = greatest_prime(n);
  
  printf("\n");
  printf("Integer: %d\n", n);
  printf("largest Prime Factor: %d\n", prime);

  return EXIT_SUCCESS;
}



