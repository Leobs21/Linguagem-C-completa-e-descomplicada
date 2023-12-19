#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia um número inteiro e mostre o seu complemento
//bit a bit.
int main(){
    unsigned char x,r;
    printf("Digite um numero: ");
    scanf("%d", &x);
    r = ~x;
    printf("O complemento bit a bit: %d\n", r);
    system("pause");
    return 0;
}
