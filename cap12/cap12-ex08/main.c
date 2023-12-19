/*
 * Dado um arquivo contendo um conjunto de nomes e dates de nascimento (dia, mês e ano, isto é, três inteiros seguidos),
 * escrever um programa que leia esse arquivo e a date atual e gere outro arquivo contendo o nome e a idade.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
  int day, month, year;
} date;


int calculate_date(date currentDate, date birthDate)
{
  int age = currentDate.year - birthDate.year;

  if(currentDate.month < birthDate.month || currentDate.month == birthDate.month && currentDate.day < birthDate.day){
    age--; 
  }
  return age;
}


int main(void)
{
  int age;
  int len = 0;
  date birthDate;
  char name[30];
  date currentDate = {22, 11, 2024};

  FILE *file = fopen("birth.txt", "r");

  if(file == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  int c;
  while((c = fgetc(file)) != EOF){
    if(c == '\n'){
      len += 1;
    }
  }
  
  fseek(file, 0, SEEK_SET);

  FILE *fileAge = fopen("age.txt", "w"); 

  if(fileAge == NULL){
    perror("error");
    exit(EXIT_FAILURE);
  }
  
  for(int i = 0; i < len; i++){
    fscanf(file, "name: %s | birth: %d/%d/%d\n", name, &birthDate.day, &birthDate.month, &birthDate.year);
    
    age = calculate_date(currentDate, birthDate);
    
    fprintf(fileAge, "name: %s | age: %d\n", name, age);
 }

  fclose(fileAge);

  fclose(file);

  return EXIT_SUCCESS;
}
