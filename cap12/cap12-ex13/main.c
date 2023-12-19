/*
 * Faça um programa que leia um arquivo texto contendo os dados de um aluno.
 * Cada linha do arquivo contém o número de matrícula, o nome e as notas de três provas de um aluno.
 * Os dados devem ser lidos e armazenados em uma estrutura.
 * Em seguida, exiba os dados lidos em tela.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int registration;
  char name[30];
  float g1, g2, g3;
} student;


void print_student_registration(student student)
{
  printf("registration: %d\n", student.registration);
  printf("name: %s\n", student.name);
  printf("grades: %.1f | %.1f | %.1f\n", student.g1, student.g2, student.g3);

}

void data_from_file(student *student)
{
  FILE* file = fopen("student.txt", "r");
  
  fscanf(file, "registration: %d\n", &student->registration);
  
  char line[200];

  if(fgets(line, sizeof(line), file) != NULL){
    char *name = strstr(line, "name: ");
    name += strlen("name: ");

    sscanf(name, "%s", student->name);
  }

  fscanf(file, "grades: %f | %f | %f\n", &student->g1, &student->g2, &student->g3);

  fclose(file);
}


int main(void)
{
  student student;

  data_from_file(&student);

  print_student_registration(student);

  return EXIT_SUCCESS;
}
