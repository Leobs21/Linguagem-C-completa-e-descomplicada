/*
 * Elabore uma função que receba três números inteiros como parâmetro, representando horas, minutos e segundos.
 * A função deve retornar esse horário convertido em segundos.   
 */

#include <stdio.h>
#include <stdlib.h>

int time_to_sec(int hour, int minute, int second)
{
  return (hour * 3600) + (minute * 60) + second;
}


int main()
{
  int time_in_second, hour, minute, second;
  printf("Enter the current time containing hour, minute and second!\n");
  printf("Enter the current time (hour:minute:second): ");
  scanf("%d:%d:%d", &hour, &minute, &second);
  
  time_in_second = time_to_sec(hour, minute, second);

  printf("Time: %d:%d:%d\n", hour, minute, second);
  printf("Segundos: %d\n", time_in_second);
 
  return EXIT_SUCCESS;
}
