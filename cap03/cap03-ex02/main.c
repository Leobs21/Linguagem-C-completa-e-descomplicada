#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia um número real e imprima a quinta parte desse
//número
int main(){
    float x;
    printf("Digite um numero com ponto flutuante:");
    scanf("%f", &x);
    printf("A quinta parte desse numero e: %.2f\n", x / 5);
    system("pause");
    return 0;
}
