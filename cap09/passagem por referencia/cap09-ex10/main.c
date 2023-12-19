/*
 * Escreva uma função que receba uma string e retorne se ela é um palíndromo (1) ou não (0).
 * Um palíndromo é uma palavra que tem a propriedade de poder ser
 * lida tanto da direita para a esquerda como da esquerda para a direita.
 * Exemplos: ovo, arara, rever, asa, osso etc.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char word[])
{
  int len = strlen(word);
  int result = 0;
  
  if(word[0] == word[len-2] && word[1] == word[len-3]){
    result = 1;
  } else {
    result = 0;
  }

  return result;
}

int main()
{
  char word[30]; 
  int result;

  printf("Enter a word: ");
  fgets(word, 30, stdin);
  
  result = is_palindrome(word);

  if(result == 1){
    printf("is a PALINDROME!\n");
  } else {
    printf("is not a PALINDROME!\n");
  }
  
  return EXIT_SUCCESS;
}
