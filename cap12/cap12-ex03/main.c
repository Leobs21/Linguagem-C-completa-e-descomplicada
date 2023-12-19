/*
 * Escreva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos.
 * O programa deverá ler do usuário o nome do arquivo a ser convertido e o nome do arquivo a ser salvo.
 */

#include <ctype.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verify_if_open(FILE *f)
{
  if(f == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
}

char* convert_to_caps(FILE *file, char name[30])
{
  char c;
  FILE *newFile;
  char *newFileName;

  printf("\nSave new file\nEnter name: ");
  fgets(newFileName, 30, stdin);

  newFileName[strcspn(newFileName, "\n")] = 0;

  newFile = fopen(newFileName, "w+");
  file = fopen(name, "r");

  verify_if_open(file);
  verify_if_open(newFile);

  while((c = fgetc(file)) != EOF){
    if(islower(c)){
      c = toupper(c);
    }
    fputc(c, newFile);
  }
  
  fclose(file);
  fclose(newFile);

  printf("\nSaved successfully!\n");

  return newFileName;
}

void create_file(FILE *file, char name[30])
{
  FILE *f;
  char txt[100]; 

  f = fopen(name, "w+");

  verify_if_open(f);

  printf("\nEnter text: ");
  fgets(txt, 100, stdin); 
  
  fputs(txt, f);

  fclose(f);
}

int main(void)
{
  char c;
  FILE *file, *newFile;
  char name[30], *newFileName;

  printf("Create file\nEnter name: ");

  fgets(name, 30, stdin);

  name[strcspn(name, "\n")] = 0;

  create_file(file, name);
  newFileName = convert_to_caps(file, name);

  printf("\nText to convert:\n");
  file = fopen(name, "r");
  
  verify_if_open(file);

  while((c = fgetc(file)) != EOF){
    printf("%c", c);
  }

  fclose(file);
  
  printf("\nText in upper case:\n");
  newFile = fopen(newFileName, "r");

  verify_if_open(newFile);
  
  while((c = fgetc(newFile)) != EOF){
    printf("%c", c);
  }

  fclose(newFile);

  return EXIT_SUCCESS;
}
