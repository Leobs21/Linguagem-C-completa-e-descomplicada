#include <stdio.h>
#include <stdlib.h>
//Elabore um programa que leia dois números inteiros e exiba o deslocamento, à
//esquerda e à direita, do primeiro número pelo segundo.
int main(){
    int x,y,r1,r2;
    printf("Digite dois numeros: ");
    scanf("%d%d", &x,&y);
    r1 = x >> y;
    r2 = x << y;
    printf("O deslocamento a direita de %d para %d e: %d\n", x,y,r1);
    printf("O deslocamento a esquerda de %d para %d e: %d\n", x,y,r2);
    system("pause");
    return 0;
}
