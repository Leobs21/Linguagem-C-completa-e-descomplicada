/*
 * Escreva uma função que receba como parâmetro o nome de um arquivo texto e retorne quantas vogais esse arquivo possui.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_vowels(FILE* file)
{
  int c, vowels = 0;

  file = fopen("text.txt", "r");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }

  printf("--text file--\n"); 
  while ((c = fgetc(file)) != EOF) {
    printf("%c", c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
      vowels++;
    }
  }

  return vowels;
}


int main(void)
{
  int vowels;
  FILE* file; 

  vowels = count_vowels(file);
  
  printf("Number of Vowels: %d\n", vowels);

  return EXIT_SUCCESS;
}

