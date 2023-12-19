/*
 * Escreva um programa que leia
 * do usuário o nome de um arquivo texto.
 * Em seguida, mostre na tela quantas linhas
 * esse arquivo possui.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
  char fileName[30], text[100];
  FILE *f;

  printf("Create a file: ");
  fgets(fileName, 30, stdin); 
  
  fileName[strcspn(fileName, "\n")] = 0;  

  f = fopen(fileName, "w+");
  
  if(f == NULL){
    perror("Error");
    exit(EXIT_FAILURE);
  } else {
    printf("\nFile created successfully!\n");
  }
  
  int countLines = 0;
  int i = 1;
  printf("\nEnter a text. (press Ctr+D to finish editing).\n");

  do{
    printf("%d: ", i);
    
    setbuf(stdin, NULL);

    if(fgets(text, 100, stdin) == NULL){
      break;
    } else {
      countLines += 1;
    }
    
    fputs(text, f);

    i++;
  } while(1);

  fclose(f);

  f = fopen(fileName, "r");

  if(f == NULL){
    perror("Error opening file");
    exit(EXIT_FAILURE);
  }

  printf("\n\nFile Name: %s\n", fileName);

  char c;
  printf("\nText:\n\n");

  while((c = fgetc(f)) != EOF){
    printf("%c", c);
  }
  
  printf("\nNumber of Lines: %d\n", countLines);

  fclose(f);

  return EXIT_SUCCESS;
}
