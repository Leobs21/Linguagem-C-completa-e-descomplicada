#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
//idade e do ano atual.
int main(){
    int anoAtual, idade;
    printf("Digite a sua idade e o ano atual:");
    scanf("%d%d", &idade, &anoAtual);
    printf("Voce nasceu em %d\n", anoAtual - idade);
    system("pause");
    return 0;
}
