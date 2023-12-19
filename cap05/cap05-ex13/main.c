#include <stdio.h>
#include <stdlib.h>
//Faça um programa que exiba a soma de todos os números naturais abaixo de
//1.000 que são múltiplos de 3 ou 5.
int main(){
    int i;
    int n = 1000;
    int soma3 = 0;
    int soma5 = 0;
    for (i = 1; i <= n; i++){
        if (i % 3 == 0){
            //printf("%d ", i);
            soma3 += i;
        }
        if (i % 5 == 0){
            //printf("%d ", i);
            soma5 += i;
        }
    }
    printf("A soma de todos os numeros naturais abaixo de 1000 divisivel por 3 sao: %d.\n",soma3);
    printf("A soma de todos os numeros naturais abaixo de 1000 divisivel por 5 sao: %d.\n",soma5);
    system("pause");
    return 0;
}
