#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia um n�mero inteiro e verifique se esse n�mero � par
//ou �mpar.
int main(){
    int x, r;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    if(x % 2 == 0)
        printf("O numero %d e Par.\n", x);
    else
        printf("O numero %d e Impar.\n", x);
    system("pause");
    return 0;
}
