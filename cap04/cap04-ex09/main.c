#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
//tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

//Altura                                Peso
//                   Até 60 Entre 60-90 (inclusive) Acima de 90
//
//Menor do que 1,20       A        D                     G
//1,20-1,70               B        E                     H
//Maior do que 1,70       C        F                     I
int main(){
    float altura;
    int peso;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%d", &peso);

    if (altura <= 1.20 && altura != 0.0)
        if (peso <= 60)
            printf("Classificacao A.\n");
        else
            if (peso > 60 && peso <= 90)
                printf("Classificacao D.\n");
            else
                printf("Classificacao G.\n");
    if (altura >= 1.20 && altura <= 1.70 && altura != 0.0)
        if (peso <= 60)
            printf("Classificacao B.\n");
        else
            if (peso > 60 && peso <= 90)
                printf("Classificacao E.\n");
            else
                printf("Classificacao H.\n");
    if (altura > 1.70 && altura != 0.0)
        if (peso <= 60)
            printf("Classificacao C.\n");
        else
            if (peso > 60 && peso <= 90)
                printf("Classificacao F.\n");
            else
                printf("Classificacao I.\n");
    if (altura <= 0.0)
        printf("Nao consta na tabela de classificacao.\n");

    system("pause");
    return 0;
}
