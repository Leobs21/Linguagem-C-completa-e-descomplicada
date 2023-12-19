#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia um valor do tipo float e depois o imprima usando o
//operador “%d”. Veja o que aconteceu.
int main(){
    float x;
    printf("Digite um numero real: ");
    scanf("%f", &x);
    printf("Valor lido: %d\n", x);
    system("pause");
    return 0;
}
