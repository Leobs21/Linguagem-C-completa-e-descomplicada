#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Fa�a um programa que leia um valor em reais e a cota��o do d�lar. Em seguida,
//imprima o valor correspondente em d�lares.
int main(){
    float reais, dolar, convertido;
    dolar = 5.00;
    printf("Quantos reais voce tem?: BRA R$");
    scanf("%f", &reais);
    convertido = reais / dolar;
    printf("Essa quantia em dolar fica em: USD $%.2f\n", convertido);
    system("pause");
    return 0;
}
