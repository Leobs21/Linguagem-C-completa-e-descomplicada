#include <stdio.h>
#include <stdlib.h>
//a�a um programa que leia um n�mero inteiro N
//e depois imprima os N primeiros n�meros naturais �mpares.
int main(){
    int i,n;
    printf("Digite um valor de n: ");
    scanf("%d", &n);
    for (i = 1; i < n; i=i+2){
        printf("%d\n", i);
    }
    system("pause");
    return 0;
}
