/*
 * Crie uma função que receba uma string e retorne o ponteiro para essa string invertida.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * get_last_position(char *str, int len)
{
  return &str[len]; // set pointer to last position
}

int main(void)
{
  char *str = (char *) malloc(100);
  
  printf("Enter a string: ");
  fgets(str, 100, stdin); 

  char *p = str;

  int len = strlen(p);

  p = get_last_position(p, len);
  
  printf("\nInverted String:");
  while (p >= str){
    printf("%c", *p--);
  }

  printf("\n");

  p = str; // set initial position

  free(p);

  p = NULL;
  
  return EXIT_SUCCESS;
}
