/*
 * Escreva uma função que receba um vetor e seu tamanho como parâmetros e salve-a em um arquivo texto de nome “vetor.txt”.
 * Cada valor do vetor deve ser salvo em uma linha do arquivo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_vector_from_file(int *vet, int length)
{
  int n;
  FILE* file = fopen("vetor.txt", "r");
  
  printf("\n\nFrom file:\n");
  for(int i = 0; i < length; i++){
    fscanf(file, "%d ", &n);
    printf("%d ", n);
  }

  printf("\n");

  fclose(file);
}


void save_vector_to_file(int *vet, int length)
{
  FILE* file = fopen("vetor.txt", "w");

  for(int i = 0; i < length; i++){
    fprintf(file, "%d ", vet[i]);
  }

  fclose(file);
}


int main(void)
{ 
  int lenght = 10; 
  int vet[lenght];

  srand(time(NULL));
  
  for(int i = 0; i < lenght; i++){
    vet[i] = rand() % 30 + 1;
  }
  
  printf("From vet: \n");
  for(int i = 0; i < lenght; i++){
    printf("%d ", vet[i]);
  }

  save_vector_to_file(vet, lenght);

  print_vector_from_file(vet, lenght);
  
  return EXIT_SUCCESS;
}
