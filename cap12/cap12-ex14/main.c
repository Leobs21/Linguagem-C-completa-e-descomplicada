/*
 * Crie um programa para calcular e exibir o número de palavras contido em um arquivo texto.
 * O usuário deverá informar o nome do arquivo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_word_file(FILE* file, char* fileName)
{
  long size;
  char* token;
  char* cptext;
  int countWord = 0;

  file = fopen(fileName, "r");
  
  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
 
  fseek(file, 0, SEEK_END);
  size = ftell(file);
  fseek(file, 0, SEEK_SET);

  cptext = (char*) malloc(size * sizeof(char*));
  
  //copia os caracteres do arquivo para cptext usando fread()
  fread(cptext, sizeof(char), size, file);

  token = strtok(cptext, " ");
  
  printf("\n");
  while(token != NULL){
    printf("\"%s\" ", token);
    countWord += 1;
    token = strtok(NULL, " ,.\n!?");
  }
  printf("\n\n");

  fclose(file);

  free(cptext);
  return countWord;
}

int main(void)
{
  int menu, countWord = 0;
  FILE* file;
  char fileName[30];
  
  printf("--Choose an available text file--\n");
  printf("1. text.txt\n");
  printf("2. text_2.txt\n");
  printf("Enter 1 or 2: ");

  scanf("%d", &menu);
  
  switch (menu) {
    case 1:
      strcpy(fileName, "text.txt");
      break;
    case 2:
      strcpy(fileName, "text_2.txt");
      break;
  }

  countWord = count_word_file(file, fileName);

  printf("The number of words in the file: %d\n", countWord);
  
  return EXIT_SUCCESS;
}
