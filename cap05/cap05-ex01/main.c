#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os
//n�meros naturais de 0 at� N em ordem crescente
int main(){
    int n,i;
    printf("Digite um valor de n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("%d\n", i);
    }
    system("pause");
    return 0;
}
