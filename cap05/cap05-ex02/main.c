#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia um número inteiro positivo N e imprima todos os
//números naturais de 0 até N em ordem decrescente.
int main(){
    int i, n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    //i = 0; testado em while
    for (i = 0; n > i; n--){
        printf("%d\n", n);
    }
    system("pause");
    return 0;
}
