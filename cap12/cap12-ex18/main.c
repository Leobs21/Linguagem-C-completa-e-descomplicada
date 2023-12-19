/*
 * Crie um programa que leia um arquivo binário contendo uma quantidade qualquer de números.
 * O primeiro número lido indica quantos valores existem no arquivo.
 * Mostre na tela o maior e o menor valor lido. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bigger_and_smaller(FILE* file, int size)
{
  int arr[size];
  int totalRead, bigger, smaller;

  file = fopen("number.bin", "rb");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }

  totalRead = fread(arr, sizeof(int), size, file);

  fclose(file);

  if(totalRead != size){
    printf("error: size is not correct\n");
    exit(EXIT_FAILURE);
  } else {
    smaller = arr[1];
    bigger = arr[1];
    for(int i = 1; i < size; i++){
      if(arr[i] > bigger){
        bigger = arr[i];
      }
      
      if(arr[i] < smaller){
        smaller = arr[i];
      }
    }
  }
  
  printf("\namount of numbers: %d\n", arr[0]);
  printf("bigger: %d\n", bigger);
  printf("smaller: %d\n", smaller);

}


void write_file(FILE* file, int size)
{
  int arr[size];
  
  arr[0] = size;
  
  printf("%d ", arr[0]);
  for(int i = 1; i < size; i++){
    arr[i] = rand() % 30 + 1;
    printf("%d ", arr[i]);
  }
  printf("\n");

  file = fopen("number.bin", "wb");

  fwrite(arr, sizeof(int), size, file);

  fclose(file);
}


int main(void)
{
  int size = 11;
  FILE* file;
  
  srand(time(NULL));
  
  printf("Number in the file:\n");
  write_file(file, size);
  bigger_and_smaller(file, size);

  return EXIT_SUCCESS;
}
