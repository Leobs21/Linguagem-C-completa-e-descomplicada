/*
 * Considerando a estrutura atleta do exercício anterior, escreva um programa que leia um arquivo binário contendo os dados de cinco atletas.
 * Calcule e exiba o nome do atleta mais alto e do mais velho.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char name[30];
  char sport[30];
  int age;
  float height;
} registration;


int main(void)
{
  int size = 5;
  FILE* file;
  int totalRead;
  registration athlete[size], older, taller;

  file = fopen("athletes.bin", "rb");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  totalRead = fread(athlete, sizeof(registration), size, file);

  if(totalRead != size){
    printf("error: size is not correct!\n");
    exit(EXIT_FAILURE);
  }

  fclose(file);
  
  printf("athletes:\n");
  for(int i = 0; i < size; i++){
    printf("name: %s | sport: %s\n", athlete[i].name, athlete[i].sport);
    printf("age: %d | height: %.2f\n", athlete[i].age, athlete[i].height);
    printf("\n");
  }
  
  older.age = athlete[0].age;
  taller.height = athlete[0].height;

  for(int i = 0; i < size; i++){
    if(athlete[i].age >= older.age){
      strcpy(older.name, athlete[i].name);
      strcpy(older.sport, athlete[i].sport);
      older.age = athlete[i].age;
      older.height = athlete[i].height;
    }

    if(athlete[i].height >= taller.height){
      strcpy(taller.name, athlete[i].name);
      strcpy(taller.sport, athlete[i].sport);
      taller.age = athlete[i].age;
      taller.height = athlete[i].height;
    }
  }
  
  printf("----------------------------------\n");
  printf("THE OLDEST:\n");
  printf("name: %s | sport: %s\n", older.name, older.sport);
  printf("age: %d | height: %.2f\n", older.age, older.height);
  
  printf("\nTHE TALLER:\n");
  printf("name: %s | sport: %s\n", taller.name, taller.sport);
  printf("age: %d | height: %.2f\n", taller.age, taller.height);

  return EXIT_SUCCESS;
}
