#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia tr�s vari�veis: char, int e float. Em seguida, imprima-as de tr�s maneiras diferentes: separadas por espa�os, por uma tabula��o horizontal e
//uma em cada linha. Use um �nico comando printf() para cada opera��o de escrita
//das tr�s vari�veis
int main(){
    char letra;
    int x;
    float y;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um numero com ponto flutuante: ");
    scanf("%f", &y);
    printf("Os seguintes valores foram digitados: \n\t%c\n\t%d\n\t%.2f", letra, x, y);
}
