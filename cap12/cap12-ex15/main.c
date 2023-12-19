/*
 * Elabore um programa para calcular e exibir o número de vezes que cada letra ocorre dentro de um arquivo texto.
 * Ignore as letras com acento.
 * O usuário deverá informar o nome do arquivo.
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_text_file(FILE* file, char filename[])
{
  int c;

  file = fopen(filename, "r");

  if (file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }

  printf("\n"); 
  while ((c = fgetc(file)) != EOF){
    printf("%c", c);
  }
  printf("\n"); 

  fclose(file);
}


int count_letter_file(FILE* file, char filename[])
{
  char c;
  int countLetter = 0;

  file = fopen(filename, "r");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }

  while((c = fgetc(file)) != EOF){
    if (isalpha(c)){
      countLetter++;
    } 
  }

  fclose(file);
  return countLetter;
}

int main(void)
{
  FILE* file;
  char filename[30];
  int menu, countLetter, c;
  
  do{
    setbuf(stdin, NULL);

    printf("--choose a file--\n");
    printf("1. text.txt\n");
    printf("2. text_2.txt\n");
    printf("Enter 1 or 2: ");
    scanf("%d", &menu);
    
    if(menu == 1){
      strcpy(filename, "text.txt");
    } else if (menu == 2) {
      strcpy(filename, "text_2.txt");
    } else {
      printf("\nPlease enter 1 or 2!\n\n");
    }

  } while(menu > 2 || menu == 0);

  print_text_file(file, filename);

  countLetter = count_letter_file(file, filename);

  printf("Number of letter in the file: %d\n", countLetter);

  return EXIT_SUCCESS;
}
