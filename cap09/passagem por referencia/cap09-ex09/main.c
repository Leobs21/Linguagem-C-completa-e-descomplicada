/*
 * Crie uma estrutura representando um aluno de uma disciplina. 
 * Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
 * Agora, escreva uma função que receba um vetor de tamanho N dessa estrutura.
 * Essa função deve retornar o índice do aluno que possui a maior média geral entre todos os alunos.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 5;

typedef struct {
  int registration;
  char name[30];
  float g1, g2, g3;
} school;

void grade_point_average(school student[]){

  float grade_average = 0.0;

  int i_student[count]; //array due to whether there is a tie!

  for(int i = 0; i < count; i++){
    float sum = student[i].g1 + student[i].g2 + student[i].g3;

    float temp = sum / 3;
    
    if(temp >= grade_average){
      grade_average = temp;
      i_student[i] = i;
    }
  }

  printf("\n");

  for(int i = 0; i < count; i++){
    if(i_student[i] == i){
      printf("Registration: %d\n", student[i].registration);
      printf("Student: %s\n", student[i].name);
      printf("Grades: %.2f %.2f %.2f\n", student[i].g1, student[i].g2, student[i].g3);
      printf("Grade Average: %.2f\n", grade_average);
      printf("\n");
    }
  }
}

int main()
{
  school student[count];
  
  for(int i = 0; i < count; i++){
    setbuf(stdin, NULL);

    student[i].registration = i + 1;

    printf("Enter student name: ");
    fgets(student[i].name, 30, stdin);

    int len = strlen(student[i].name);

    if(student[i].name[len - 1] == '\n'){
      student[i].name[len - 1] = '\0';
    }

    printf("Enter three exam grades for student %s's: ", student[i].name);
    scanf("%f %f %f", &student[i].g1, &student[i].g2, &student[i].g3); 
  }
  
  grade_point_average(student);

  return EXIT_SUCCESS;
}
