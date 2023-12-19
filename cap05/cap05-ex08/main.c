#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia 10 inteiros e imprima sua média
int main(){
    int i,j,n;
    float media = 0.0;
    j = 10;
    printf("Digite 10 numeros inteiros, no final sera mostrado a media.\n");
    for(i = 0;i < j;i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &n);
        media += n;
    }
    printf("A media de todos os numeros e: %.2f\n", media / j);
    system("pause");
    return 0;
}
