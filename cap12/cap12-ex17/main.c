/*
 * Elabore um programa que leia um arquivo binário contendo 100 números. Mostre na tela a soma desses números.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int sum = 0;
  long size;
  FILE* file;
  int totalRead;

  file = fopen("number.bin" , "rb");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  fseek(file, 0, SEEK_END); 
  size = ftell(file) / sizeof(int);
  fseek(file, 0, SEEK_SET); 

  int arr[size];
  
  totalRead = fread(arr, sizeof(int), size, file);

  fclose(file);

  if(totalRead != size){
    printf("error: size is not correct\n");
    exit(EXIT_FAILURE);
  } else {
    printf("Numbers in the file:\n");
    for(int i = 0; i < size; i++){
      printf("%d ", arr[i]);
      sum += arr[i];
    }
    printf("\n");
  }
  
  printf("\nThe sum of the numbers: %d\n", sum);

  return EXIT_SUCCESS;
}
