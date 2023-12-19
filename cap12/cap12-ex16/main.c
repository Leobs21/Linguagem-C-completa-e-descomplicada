/*
 * Faça um programa que leia 100 números.
 * Esse programa deverá, em seguida, armazenar esses números em um arquivo binário.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void write_number_file(FILE* file, int size)
{
  int arr[size];
  int totalWrite;
  file = fopen("number.bin", "wb");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  for(int i = 0; i < size; i++){
    arr[i] = rand() % 30 + 1;
  }

  totalWrite = fwrite(arr, sizeof(int), size, file);

  fclose(file);

  if(totalWrite != size){
    perror("error");
    exit(EXIT_FAILURE);
  }
}


void read_number_file(FILE* file, int size)
{
  int arr[size];
  int totalRead;

  file = fopen("number.bin", "rb");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  totalRead = fread(arr, sizeof(int), size, file);

  fseek(file, 0 , SEEK_END);
  long sizeByte = ftell(file);
  fseek(file, 0 , SEEK_SET);

  fclose(file);

  if(totalRead != size){
    printf("error: size is not correct\n");
    exit(EXIT_FAILURE);
  } else {
    printf("Numbers in the file:\n");
    for(int i = 0; i < size; i++){
      printf("%d ", arr[i]);
    }
    printf("\n");
  }

  printf("\nSize in Bytes: %ld\n", sizeByte);

}


int main(void)
{
  FILE* file;
  int size = 100;
  
  srand(time(NULL));

  write_number_file(file, size);

  read_number_file(file, size);

  return EXIT_SUCCESS;
}
