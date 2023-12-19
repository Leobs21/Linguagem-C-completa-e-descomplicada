#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma enumeração representando os dias da semana.
 * Agora, escreva um programa que leia um valor inteiro do teclado e exiba o dia da semana correspondente.
*/

enum {SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7};

int main()
{
    int number;
    int is_true = 0;

    printf("Enter an Integer Number and display the corresponding day of the week!.\n");
    do{
        printf("Enter an Integer Number: ");
        scanf("%d", &number);

        switch (number) {
            case MONDAY:
                printf("%d. Monday\n", number);
                is_true = 1;
                break;
            case TUESDAY:
                printf("%d. Tuesday\n", number);
                is_true = 1;
                break;
            case WEDNESDAY:
                printf("%d. Wednesday\n", number);
                is_true = 1;
                break;
            case THURSDAY:
                printf("%d. Thursday\n", number);
                is_true = 1;
                break;
            case FRIDAY:
                printf("%d. Friday\n", number);
                is_true = 1;
                break;
            case SATURDAY:
                printf("%d. Satuday\n", number);
                is_true = 1;
                break;
            case SUNDAY:
                printf("%d. Sunday\n", number);
                is_true = 1;
                break;
            default:
                printf("\n");
                printf("Enter an integer corresponding to the days of the week!\n");
                is_true = 0;
                printf("\n");
        }
    } while(is_true == 0);

    return 0;
}

