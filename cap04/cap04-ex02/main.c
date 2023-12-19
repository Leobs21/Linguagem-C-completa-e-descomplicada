#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
//dois números forem iguais, imprima a mensagem “Números iguais”.
int main(){
    int x,y;
    printf("--Verifica qual numero e MAIOR ou IGUAL--\n");
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &x, &y);
    if(x > y){
        printf("Maior: %d\n", x);
    }else{
        if (y > x)
            printf("Maior: %d\n", y);
        else
            printf("Numeros iguais\n");
    }
    system("pause");
    return 0;
}
