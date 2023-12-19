/*
 * Faça um programa que permita que o usuário entre com diversos nomes e telefone para cadastro.
 * Crie um arquivo com essas informações, uma por linha.
 * O usuário finaliza a entrada com o valor 0 para o telefone.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void save_to_file()
{
  int i = 0;
  int phone;
  char name[30];

  FILE* file = fopen("phonebook.txt", "w");
  
  do {
    printf("Enter a phone number (0 to quit): [%d.] ", i+1);
    scanf("%d", &phone);
    
    setbuf(stdin, NULL);

    if(phone != 0){
      printf("Enter a name: [%d.] ", i+1);
      fgets(name, 30, stdin);
      
      name[strcspn(name, "\n")] = 0;

      fprintf(file, "Phone: %d | Person Name: %s\n", phone, name);

      i++;
    }

    printf("\n");

  } while(phone != 0);

  fclose(file);
}


int main(void)
{
  save_to_file();

  return EXIT_SUCCESS;
}
