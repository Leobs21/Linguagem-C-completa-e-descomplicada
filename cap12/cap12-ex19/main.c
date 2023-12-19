/*
 * Crie uma estrutura representando um atleta.
 * Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura.
 * Agora, escreva um programa que leia os dados de cinco atletas e os armazene em um arquivo binário. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[30];
  char sport[30];
  int age;
  float height;
} registration;


int main(void)
{
  int size = 5;
  FILE* file;
  registration athlete[5];   

  for(int i = 0; i < size; i++){
    setbuf(stdin, NULL);

    printf("Enter the athlete's name [%d]: ", i);
    fgets(athlete[i].name, 30, stdin);

    athlete[i].name[strcspn(athlete[i].name, "\n")] = 0;

    printf("Enter the name athlete's sport [%d]: ", i);
    fgets(athlete[i].sport, 30, stdin);

    athlete[i].sport[strcspn(athlete[i].sport, "\n")] = 0;

    printf("Enter the athlete's age [%d]: ", i);
    scanf("%d", &athlete[i].age);

    printf("Enter the athlete's height [%d]: ", i);
    scanf("%f", &athlete[i].height);

    printf("\n");
  }

  file = fopen("athletes.bin", "wb");
  
  int totalWrite = fwrite(athlete, sizeof(registration), size, file);

  if(totalWrite != size){
    printf("error: size is not correct");
    exit(EXIT_FAILURE);
  } else {
    printf("total write: %d\n", totalWrite);
  }

  fclose(file);

  return EXIT_SUCCESS;
}
