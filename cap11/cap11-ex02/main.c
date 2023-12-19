/*
 * Crie uma estrutura representando um aluno de uma disciplina.
 * Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
 * Escreva um programa que mostre o tamanho em byte dessa estrutura.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char name[30];
  int registration;
  int g1, g2, g3;

} school;

int main(void)
{
  school student;
  
  strcpy(student.name, "Sakai");
  student.registration = 1;
  student.g1 = 5, student.g2 = 7, student.g3 = 10;

  int len = sizeof(school);
  
  printf("Name: %s\n", student.name);
  printf("Registration: %d\n", student.registration);
  printf("Grades: %d %d %d\n", student.g1, student.g2, student.g3);
  
  printf("\nSize in bytes of the struct school: %d bytes\n", len);


  return EXIT_SUCCESS;
}
