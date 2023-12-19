/*
 * Elabore uma função que receba duas strings como parâmetros
 * e verifique se a segunda string ocorre dentro da primeira.
 * Use aritmética de ponteiros para acessar os caracteres das strings.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_pointers(char p1[], char p2[], char p3[])
{
  printf("first string : %s\n",  p1);
  printf("second string : %s\n",  p2);
  printf("\nentered string : %s\n", p3);
}

void check_occours_string(char str1[], char str2[])
{
  char arr[30];
  char *p1 = str1;
  char *p2 = str2;
  char *p3 = arr;

  while(*p1){
    if(*p1 == *p2){
      *p3 = *p1;
      p3++;
      p2++;
    }

    p1++;
  }
  
  // reset initial position
  p1 = str1; 
  p2 = str2;
  p3 = arr;
  
  if(strcmp(p3, p2) == 0){
    print_pointers(p1, p2, p3);
    printf("\nThe second string OCCOURS within the first string!\n");
  } else {
    print_pointers(p1, p2, p3);
    printf("\nThe second string NOT occur within the first string!\n");
  }
}

int main()
{
  char str1[40]  = "eu vou ser rei dos piratas!";
  char str2[30] = "rei";

  check_occours_string(str1, str2);

  return EXIT_SUCCESS;
}
