#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
//h = sqrt(a² + b²)
//Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa
//através da fórmula dada. Imprima o resultado
int main(){
    float a,b,resultAB,hipotenusa;
    printf("Digite os valores dos catetos de um triangulo: ");
    scanf("%f%f", &a,&b);
    resultAB = a*a + b*b;
    hipotenusa = sqrt(resultAB);
    printf("O valor da hipotenusa e de %.2f\n", hipotenusa);
    system("pause");
    return 0;
}
