#include <stdio.h>
#include <stdlib.h>
//Elabore um programa que leia dois números inteiros e exiba o resultado das
//operações de "ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles.
int main(){
    int x,y,z;
    printf("Digite dois numeros: ");
    scanf("%d%d", &x,&y);
    printf("Primeiro valor: %d\n", x);
    printf("Segundo valor: %d\n", y);
    z = x & y;
    printf("E bit a bit: %d\n", z);
    z = x | y;
    printf("OU bit a bit: %d\n", z);
    z = x ^ y;
    printf("OU exclusivo: %d\n", z);
    system("pause");
    return 0;
}
