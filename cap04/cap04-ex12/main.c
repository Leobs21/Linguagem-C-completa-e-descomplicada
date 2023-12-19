#include <stdio.h>
#include <stdlib.h>
//Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
//e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
//segunda-feira, se 2, e assim por diante.
int main(){
    int weeks;
    printf("Digite um numero relacionado ao dia da semana [1-7] ");
    scanf("%d", &weeks);
    switch ( weeks ){
        case 1:
            printf("Segunda-Feira\n");
            break;
        case 2:
            printf("Terca-Feira\n");
            break;
        case 3:
            printf("Quarta-Feira\n");
            break;
        case 4:
            printf("Quinta-Feira\n");
            break;
        case 5:
            printf("Sexta-Feira\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default: printf("Digite um numero inteiro valido de 1 a 7!.\n ");
    }
    system("pause");
    return 0;
}
