#include <stdio.h>
#include <stdlib.h>
//Fa�a um programa que leia dois n�meros e mostre o maior deles. Se, por acaso, os
//dois n�meros forem iguais, imprima a mensagem �N�meros iguais�.
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
