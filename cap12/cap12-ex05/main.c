/*
 * Faça um programa que leia números positivos e os converta em binário.
 * Cada número binário deverá ser salvo em uma linha de um arquivo texto.
 * O programa termina quando o usuário digitar um número negativo.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// remplemetation of strrev() -- swap characters
char *strrev(char *str)
{
  char *p1, *p2;

  if(!str || ! *str){
    return str;
  }

  for(p1 = str, p2 = str + strlen(str) - 1; p2 > p1; p1++, p2--){
    *p1 ^= *p2; // ^= is XOR operator
    *p2 ^= *p1;
    *p1 ^= *p2;
  }

  return str;
}

int main(void)
{
  char *p;
  char bin[65];
  int decimal = 21;
  int tempDecimal = decimal;

  p = bin;

  FILE *file = fopen("bin.txt", "w");
  
  while (tempDecimal > 0) {
    tempDecimal /= 2;
    *p++ = tempDecimal % 2 + '0';
  }
  
  p = &bin[0];

  strrev(bin);
  
  while(*p != '\0'){
    fputc(*p++, file);
    fputc('\n', file);
  }
  
  char c;

  fclose(file);
  
  printf("Decimal: %d\n", decimal);

  file = fopen("bin.txt", "r");

  printf("\nBin read from txt file:\n");
  while ((c = fgetc(file)) != EOF){
    printf("%c", c); 
  }

  fclose(file);
  
  return EXIT_SUCCESS;
}
