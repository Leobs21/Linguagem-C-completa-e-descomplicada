#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
//  • O número digitado ao quadrado.
//  • A raiz quadrada do número digitado.
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Numero negativo\n");
    }else{
        int result = num * num;
        printf("O numero digitado e positivo e seu valor ao quadrado e %d\n", result);
        printf("Sua raiz quadrada e de %.2f\n", sqrt(num));
    }
    system("pause");
    return 0;
}
