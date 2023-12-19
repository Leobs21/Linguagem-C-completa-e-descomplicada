#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia dois números e mostre qual deles é o maior.
int main(){
    int x,y,r;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &x,&y);
    if(x > y)
        r = x;
    else
        r = y;
    printf("O numero maior e %d\n", r);
    system("pause");
    return 0;
}
