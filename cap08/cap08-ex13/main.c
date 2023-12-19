#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Crie uma enumeração representando os meses do ano.
 * Agora, escreva um programa que leia um valor inteiro do teclado e exiba o nome do mês correspondente e quantos dias ele possui.
*/

enum {JANUARY=1, FEBRUARY=2, MARCH=3, APRIL=4, MAY=5, JUNE=6,
      JULY=7, AUGUST=8, SEPTEMBER=9, OCTOBER=10, NOVEMBER=11, DECEMBER=12
     };

int main()
{
    int number;
    int days;
    int is_true = 1;

    printf("Enter an integer corresponding to a month!\n");

    do{
        printf("Enter an integer: ");
        scanf("%d", &number);

        if (number == APRIL || number == JUNE || number == SEPTEMBER || number == NOVEMBER)
        {
            days = 30;
        } else if (number == FEBRUARY) {
            days = 28;
        } else {
            days = 31;
        }

        switch (number) {
            case JANUARY:
                printf("\nMonth: %d. January\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case FEBRUARY:
                printf("\nMonth: %d. February\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case MARCH:
                printf("\nMonth: %d. March\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case APRIL:
                printf("\nMonth: %d. April\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case MAY:
                printf("\nMonth: %d. May\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case JUNE:
                printf("\nMonth: %d. June\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case JULY:
                printf("\nMonth: %d. July\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case AUGUST:
                printf("\nMonth: %d. August\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case SEPTEMBER:
                printf("\nMonth: %d. September\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case OCTOBER:
                printf("\nMonth: %d. January\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case NOVEMBER:
                printf("\nMonth: %d. November\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            case DECEMBER:
                printf("\nMonth: %d. December\n", number);
                printf("Days: %d\n",days);
                is_true = 1;
                break;
            default:
                printf("\n");
                printf("Enter an integer what corresponding to a month! (1-12).\n");
                is_true = 0;
                printf("\n");
        }
    } while(is_true == 0);

    return 0;
}
