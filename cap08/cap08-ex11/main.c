#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva um programa que contenha uma estrutura representando uma data válida.
 * Essa estrutura deve conter os campos dia, mês e ano.
 * Em seguida, leia duas datas e armazene nessa estrutura.
 * Calcule e exiba o número de dias que decorreram entre as duas datas.
*/

typedef struct{
    int day;
    int month;
    int year;
} datetime;

/*month that contain 30 days and FEB with 28 (without leap year)*/
enum {FEB=2, APR=4, JUN=6, SEP=9, NOV=11};

int main ()
{
    datetime date[2];

    printf("Enter the two dates, calcule and display the days elapsed between them.\n");

    printf("Enter the start date (d/m/y): ");
    scanf("%d/%d/%d", &date[0].day, &date[0].month, &date[0].year);
    printf("Enter the final date (d/m/y): ");
    scanf("%d/%d/%d", &date[1].day, &date[1].month, &date[1].year);

    int start_day = date[0].day;
    int start_month = date[0].month;
    int start_year = date[0].year;

    int final_day = date[1].day;
    int final_month = date[1].month;
    int final_year = date[1].year;

    int month_start = start_month;

    int month_days = 0;
    int count_days = 0;

    int is_true = 1;

    while(is_true == 1)
    {
        switch (month_start)
        {
            case FEB:
                month_days = 28;
                break;
            case APR:
                month_days = 30;
                break;
            case JUN:
                month_days = 30;
                break;
            case SEP:
                month_days = 30;
                break;
            case NOV:
                month_days = 30;
                break;
                default:
                month_days = 31;
                break;
        }

        for(int i = start_day; i <= month_days; i++)
        {
            count_days += 1;
            start_day += 1;

            if(start_day == final_day && start_month >= final_month && start_year == final_year)
            {
                count_days += 1;
                is_true = 0;
                break;
            }

            if(start_day == month_days)
            {
                month_start += 1;
                start_month += 1;
                start_day = 0;
            }

            if (start_month > 12)
            {
                start_year += 1;
                start_month = 1;
                month_start = 1;
                start_day = 0;
            }
        }
    }
    printf("\n");

    printf("Start Date\n");
    printf("Day: %d\n", start_day);
    printf("Month: %d\n", start_month);
    printf("Year: %d\n", start_year);

    printf("\n");

    printf("Final Date\n");
    printf("Day: %d\n", final_day);
    printf("Month: %d\n", final_month);
    printf("Year: %d\n", final_year);

    printf("Total Days: %d\n", count_days);

    return 0;
}
