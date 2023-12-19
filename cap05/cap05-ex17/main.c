#include <stdio.h>
#include <stdlib.h>
//escreva um programa que leia um número inteiro positivo N
//e em seguida imprima N linhas do chamado triângulo de Floyd
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//16 17 18 19 20 21
int main(){
    int i,j,n;
    int x = 0;
    int y = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (i = 0; i < y; i++){
        for (j = 0; j <= i; j++){
            x += 1;
            printf("%d ", x);
        }
        while (y < n){
            y++ ;
        }
        printf("\n");

    }
    system("pause");
    return 0;
}
