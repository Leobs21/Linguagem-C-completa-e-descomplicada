/*
 * Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
 * Exemplo: Entrada = 4. Saída = abril.
 */

#include <stdio.h>
#include <stdlib.h>

void list_month(int x)
{
  switch (x) {
    case 1:
      printf("1. January | 31 days\n");
      break;
    case 2:
      printf("2. February | 28 days\n");
      break;
    case 3:
      printf("3. March | 31 days\n");
      break; 
    case 4:
      printf("4. April | 30 days\n");
      break;
    case 5:
      printf("5. May | 31 days\n");
      break;
    case 6:
      printf("6. June | 30 days\n");
      break; 
     case 7:
      printf("7. July | 31 days\n");
      break;
    case 8:
      printf("8. August | 31 days\n");
      break;
    case 9:
      printf("9. September | 30 days\n");
      break; 
    case 10:
      printf("10. October | 31 days\n");
      break;
    case 11:
      printf("11. November | 30 days\n");
      break;
    case 12:
      printf("12. December | 31 days\n");
      break; 
  }
} 

int main()
{
  int x;
  printf("Enter a number and print the name of the related month and its number of days!\n");

  do{
    printf("Enter a number: ");
    scanf("%d", &x);   

    if (x < 1 || x > 12){
      printf("Enter a number between 1 and 12!\n");
    }

  } while (x < 1 || x > 12);

  list_month(x);

  printf("returned to int main()!\n");
  return EXIT_SUCCESS;
}


