/*
 * Escreva uma função que receba um número inteiro positivo n.
 * Calcule e retorne o somatório de 1 até n: 1 + 2 + 3 + ... + n.
 */

#include <stdio.h>
#include <stdlib.h>

int somat(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  return sum;
}

int main()
{
  int n;
  
  printf("Enter a integer, calculate and return the sum from 1 to n!\n");
  printf("Enter a integer: ");
  scanf("%d", &n);
  
  printf("\n");
  printf("The N entered: %d\n", n);
  printf("The sum from 1 to N: %d\n", somat(n));
  
  return EXIT_SUCCESS;
}

