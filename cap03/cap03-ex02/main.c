#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia um n�mero real e imprima a quinta parte desse
//n�mero
int main(){
    float x;
    printf("Digite um numero com ponto flutuante:");
    scanf("%f", &x);
    printf("A quinta parte desse numero e: %.2f\n", x / 5);
    system("pause");
    return 0;
}
