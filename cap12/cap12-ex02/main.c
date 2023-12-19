/*
 * Escreva um programa que leia do usuário os nomes de dois arquivos texto.
 * Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos
 * (o conteúdo do primeiro seguido do conteúdo do segundo).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void write_txt(FILE *file)
{
  int i = 0; // number of lines
  char txt[100];

  printf("Enter text:\n");
  do{
    printf("%d: ", i+1);
    
    if(fgets(txt, 100, stdin) == NULL){
      break;
    }

    fputs(txt, file);

    i++;
  } while (i != 2);
}

void create_file(FILE *file, char name[30])
{
  file = fopen(name,"w");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  write_txt(file);

  fclose(file);
}

void copy_txt(FILE *file, char name[30])
{
  char c; 
  int i = 0;
  FILE *f = fopen("third.txt", "a");
  
  file = fopen(name, "r");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }

  while((c = fgetc(file)) != EOF){
    fputc(c, f);
  }
  
  fclose(file);

  fclose(f);
}

int main(void)
{
  FILE *f; 
  int count = 2;
  char fileName[30]; 
  
  for(int i = 0; i < count; i++){
    printf("Enter the file name [%d]: ", i+1);

    setbuf(stdin, NULL);

    fgets(fileName, 30, stdin);
    
    fileName[strcspn(fileName, "\n")] = 0;

    create_file(f, fileName);

    copy_txt(f, fileName);
  }

  FILE *fThird = fopen("third.txt", "r");

  char c;
  printf("\n--Third File--\n");
  while((c = fgetc(fThird)) != EOF){
    printf("%c", c);
  }

  return EXIT_SUCCESS;
}
