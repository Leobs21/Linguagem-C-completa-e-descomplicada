#include <stdio.h>
#include <stdlib.h>
//Faça um programa que calcule e escreva o valor de S
//              1   3   5   7       99
//          S = - + - + - + - ... + --
//              1   2   3   4       55
int main(){
    int i,n;
    float s = 0.0;
    float impar = 1.0;
    float par = 1.0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (i = 0; i < n ; i++){
        printf("%.0f/%.0f ", impar, par);
        s += impar / par;
        par += 1;
        impar += 2;
    }
    printf("\nA soma de S e de %.4f.\n", s);
    system("pause");
    return 0;
}
