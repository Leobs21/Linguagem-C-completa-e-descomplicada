#include <stdio.h>
#include <stdlib.h>
//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares
int main(){
    int i,n, par;
    n = 51;
    par = 0;
    for (i = 0; i < n; i++){
        if (i % 2 == 0){
            printf("%d ", i);
            par = par + i;
        }
    }
    printf("\n");
    printf("A soma de todos os pares ate 50: %d\n", par);
    system("pause");
    return 0;
}
