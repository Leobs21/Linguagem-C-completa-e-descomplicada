/*
 * Escreva uma função que receba um array contendo a nota de 10 alunos e retorne a média dos alunos.
 */

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[30];
  int grade;
} school;

float average(float arr[], int amount)
{
  float average;
  float sum = 0.0;

  for(int i = 0; i < amount; i++){
    sum += arr[i];
  }
  return average = (sum / amount);
}

int main()
{
  float avg;
  int amount = 10;
  float arr[amount];

  school student[amount];
  
  for(int i = 0; i < amount; i++){
    setbuf(stdin, NULL);

    printf("Enter the student's name: ");
    fgets(student[i].name, 30, stdin);
    
    int len = strlen(student[i].name);

    if(student[i].name[len - 1] == '\n'){
      student[i].name[len - 1] = '\0';
    }

    printf("Enter %s's grade: ", student[i].name);
    scanf("%f", &arr[i]);

    printf("\n");
  }

  avg = average(arr, amount);
  
  for(int i = 0; i < amount; i++){
    printf("Student: %s\n", student[i].name);
    printf("Grade: %.1f\n", arr[i]);
    printf("\n");
  }

  printf("Average Student Grade: %.2f\n", avg);

  return EXIT_SUCCESS;
}
