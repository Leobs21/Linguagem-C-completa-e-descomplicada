/*
 * Crie uma função que receba como parâmetro um vetor e o imprima.
 * Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.
 */

/*
 * NESSE EXERCICIO EU OPTEI POR GERAR NUMEROS ALEATORIOS SEM USAR RAND() E SRAND() APENAS PRA FINS DE ESTUDOS!
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int generate_random_number(unsigned int seed){
  unsigned int a = 1664525; // multiplicador
  unsigned int c = 1013904223; // incremento
  unsigned int m = 4294967295; // modulo max de 2^32 
  
  // fórmula: Gerador Linear Congruente (GLC)
  seed = (a * seed + c) % m;

  return seed;
}

void print_arr(int arr[])
{
  for(int i = 0; i < 10; i++){
    printf("%d ", *arr++);
  }
}

int main()
{
  unsigned int seed = 42; // seed inicial
  int arr[10];

  for(int i = 0; i < 10; i++){
    seed = generate_random_number(seed) % 101; // tem q ser numero primo
    arr[i] = seed;
  }

  print_arr(arr);

  printf("\n");
  return EXIT_SUCCESS;
}
