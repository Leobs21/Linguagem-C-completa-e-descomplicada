#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia dois valores do tipo float. Use um �nico comando de
//leitura para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles
//foram lidos.
int main(){
    float x, y;
    printf("Digite dois numeros com ponto flutuantes com espa�o entre eles: ");
    scanf("%f%f", &x, &y);
    printf("Valores digitado com ordem inversa: %.2f %.2f\n", y, x);
    system("pause");
    return 0;
}
