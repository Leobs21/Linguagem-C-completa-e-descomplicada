#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia dois n�meros e mostre qual deles � o maior.
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
