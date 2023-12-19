/*
 * Escreva uma função que receba dois valores numéricos e um símbolo. 
 * Esse símbolo representará a operação que se deseja efetuar com os números. 
 * Assim, se o símbolo for “+”, deverá ser realizada uma adição,
 * se for “−”, uma subtração, se for “/”, uma divisão, e, se for “*”, será efetuada uma multiplicação.
 * Retorne o resultado da operação para o programa principal.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float math_basic(float x, float y, char simb[1]){  
  float result;

  switch (simb[0]) {
    case '+': result = x + y; break;
    case '-': result = x - y; break;
    case '*': result = x * y; break;
    case '/': result = x / y; break;
  }

  return result;
}

int main()
{
  char simb[3];

  float x, y, result;
  int choose;
  
  printf("Enter 2 numerical values and a symbol corresponding to the basic math operations and do the calculation!\n");
  printf("\n");

  do {
    printf("--------------------------\n");
    printf("        -- MENU --         \n");
    printf("|1.    ' + ' (add)       |\n");
    printf("|2.    ' - ' (sub)       |\n");
    printf("|3.    ' * ' (mult)      |\n");
    printf("|4.    ' / ' (div)       |\n");
    printf("--------------------------\n");
    printf("Enter the number: ");
    scanf("%d", &choose);
    
    switch (choose) {
      case 1: strcpy(simb, "+"); break;
      case 2: strcpy(simb, "-"); break;
      case 3: strcpy(simb, "*"); break;
      case 4: strcpy(simb, "/"); break;
      default: printf("\nEnter between 1 and 4 to continue!\n\n");
    }
  } while(choose <= 0 || choose > 4);  

  printf("\n");

  printf("Enter the first number: ");
  scanf("%f", &x);

  printf("Enter the second number: ");
  scanf("%f", &y);
  
  result = math_basic(x, y, simb);

  printf("\n");

  printf("First Number: %.2f\n", x);
  printf("Second Number: %.2f\n", y);
  printf("Result of calc: %.2f\n", result);

  return EXIT_SUCCESS;
}
