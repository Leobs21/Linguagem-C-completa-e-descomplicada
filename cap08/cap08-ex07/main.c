#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/*  Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
    hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
    posições dessa estrutura e imprima a maior hora.
*/

struct hora_cad{
    int hora;
    int min;
    int seg;
};

int main()
{
    int timer_count = 5;

    struct hora_cad timer[timer_count];
    struct hora_cad timer_maior;

    timer_maior.hora = 0;
    timer_maior.min = 0;
    timer_maior.seg = 0;

    printf("Forneca um vetor com 5 posicoes contendo hora:min:seg.\n");
    printf("Printe na tela a Maior Hora fornecida.\n");
    for(int i = 0; i < timer_count; i++)
    {
        printf("Digite a %d hora (formato: 00:00:00): ", i+1);
        scanf("%d:%d:%d",&timer[i].hora, &timer[i].min,&timer[i].seg);
    }

    printf("\nLista de Horas disponiveis:\n");

    for(int i = 0; i < timer_count; i++)
    {
        printf("%d. %dh%dmin%ds\n", i+1, timer[i].hora, timer[i].min, timer[i].seg);
        if(timer_maior.hora <= timer[i].hora)
        {
            timer_maior.hora = timer[i].hora;
            if(timer_maior.min <= timer[i].min)
            {
                timer_maior.min = timer[i].min;
                if(timer_maior.seg <= timer[i].seg)
                {
                    timer_maior.seg = timer[i].seg;
                }
            }

        }

    }
    printf("\nA Maior Hora disponivel: %02d:%02d:%02d\n",timer_maior.hora, timer_maior.min, timer_maior.seg);

    return 0;
}
