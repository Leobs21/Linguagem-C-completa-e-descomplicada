/*
 * Elabore uma função que receba três notas de um aluno como parâmetros e uma letra.
 * Se a letra for “A”, a função deverá calcular a média aritmética das notas do aluno;
 * se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2.
 * Retorne a média calculada para o programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float arithmetic_average(float n1, float n2, float n3){
  float average = (n1 + n2 + n3) / 3;
  return average;
}

float weighted_average(float n1, float n2, float n3){
  int w1 = 5; int w2 = 3; int w3 = 2;
  float average = ((n1 * w1) + (n2 * w2) + (n3 * w3)) / (w1 + w2 + w3);
  return average;
}

int main(){
  int n1, n2, n3;
  int ascii;
  float average;
  char choose[2];

  printf("Enter 3 grades from a student, and a letter, A, calculates the arithmetic, P, calculates the weighted average!\n");

  printf("Enter 3 grades from a student: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  do {
    setbuf(stdin, NULL);
    printf("--Choose a Option--\n");
    printf("A - Calc. Arithmetic Average\n"); // média aritmética
    printf("P - Calc. Weighted Average\n"); // média ponderada
    fgets(choose, 2, stdin);

    ascii = choose[0];
    
    if (ascii == 97){ // a to A
      ascii = 65;
      strcpy(choose, "A");
    } else if(ascii == 112){ // p to P
      ascii = 80;
      strcpy(choose, "P");
    }

    if(strcmp(choose, "A") == 0) {
      average = arithmetic_average(n1, n2, n3);

      printf("Gradies: %d %d %d\n", n1, n2, n3);
      printf("Arithmetic Average: %.1f\n", average);

    } else if (strcmp(choose, "P") == 0) {
      average = weighted_average(n1, n2, n3);

      printf("Gradies: %d %d %d\n", n1, n2, n3);
      printf("Weighted Average: %.1f\n", average);

    } else {
      printf("Enter A or P!\n");
    }

 } while (ascii < 65 && ascii > 65 && ascii < 80 && ascii > 80);

  return EXIT_SUCCESS;
}
