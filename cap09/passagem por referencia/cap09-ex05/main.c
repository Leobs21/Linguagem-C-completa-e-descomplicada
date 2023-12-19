/*
 * Escreva uma função que calcule o desvio-padrão d de um vetor V contendo n números
 *
 * d = sqrt(1/n-1 sigma i=0 ate n-1 (v[i]-n)) 
 *
 * em que m é a média desse vetor.
 * 
 */

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>


float standard_deviation(int v[], int n)
{
  float d = 0;
  float media = 0;
  float sum_arr = 0;
  float media_square = 0;

  for(int i=0; i < n; i++){
    sum_arr += v[i];
  }

  media = sum_arr / n;

  for(int i=0; i < n; i++){
    media_square += pow((v[i] - media), 2);
  }

  return d = sqrtf(media_square / (n-1));
}

int main()
{ 
  float d;
  int v[5] = {4, 9, 11, 12, 17};
  int n = 5;
 
  d = standard_deviation(v, n);

  printf("N : %d\n", n);

  printf("V : ");
  for(int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }

  printf("\n");
  printf("Standard deviation: %f\n", d);

  return EXIT_SUCCESS;
}
