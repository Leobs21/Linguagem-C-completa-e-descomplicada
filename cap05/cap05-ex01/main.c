#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia um número inteiro positivo N e imprima todos os
//números naturais de 0 até N em ordem crescente
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
