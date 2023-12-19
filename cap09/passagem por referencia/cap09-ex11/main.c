/*
 * Escreva uma função que receba uma string e converta todos os seus caracteres em maiúscula.
 * Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void uppercase(char word[])
{
  int result;

  int len = strlen(word);

  for(int i = 0; i < len - 1; i++){
    if(word[i] >= 97 && word[i] <= 122){
      word[i] = word[i] - 32;
    }
  }
}

int main()
{
  char word[30];
  
  printf("Enter a word: ");
  fgets(word, 30, stdin);

  int len = strlen(word);

  uppercase(word);

  printf("%s", word);

  return EXIT_SUCCESS;
}
